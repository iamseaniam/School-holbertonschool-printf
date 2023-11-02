#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	const char *ptr = format;
	int count = 0;

	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++; /* moves past the '%'*/

			/* check if the next character is a valid conversion specifier*/
			if (*ptr == 'c' || *ptr == 's' || *ptr == '%')
			{
				if (*ptr == 'c')
				{
					int ch = va_arg(args, int);
					putchar(ch);
					count++;
				}
				/*handle string argument*/
				else if (*ptr == 's')
				{
					const char *str = va_arg(args, const char *);
					fputs(str, stdout);
					count += strlen(str);
				}
				/* handle '%' character*/
				else if (*ptr == '%')
				{
					putchar('%');
					count++;
				}
			}
			/* if the next character is not a valid conversion specifier, print it as is*/
			else
			{
				putchar('%');
				putchar(*ptr);
				count += 2;
			}
		}
		else
		{
			/*regular character, print it */
			putchar(*ptr);
			count++;
		}
		ptr++; /* move to the next character*/
	}
	va_end(args);
	return (count);
}
