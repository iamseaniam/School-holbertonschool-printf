#include "main.h"
/**
 * process - processes the format string
 * @s: format string containing *s specifier
 * @args: va_list containing variable arguments to be formatted and printed
 * Return: length of string or -1 if failure
 */
int process(const char *s, va_list args)
{
	int count = 0;

	while (*s)
	{
		if (*s == '%' && s[1])
		{
			if (s[1] == 'c' || s[1] == 's' || s[1] == 'd' || s[1] == 'i')
			{
				char format_specifier;

				format_specifier  = s[1];
				count += format(format_specifier, args);
				s += 2;
			}
			else if (s[1] == '%')
			{
				putchar('%');
				count++;
				s += 2;
			}
			else
			{
				putchar('%');
				putchar(s[1]);
				count += 2;
				s += 2;
			}
		}
		else
		{
			putchar(*s);
			count++;
			s++;
		}
	}
	return (count);
}
