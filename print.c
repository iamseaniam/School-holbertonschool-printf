#include "main.h"
/**
 * _printf - prints characters or string of characters with multiple variables
 * @format: string containing format specifiers
 * @...: Variable number of arguments to be passed to process
 * Return: length of string or -1 if failure
 */
int _printf(const char *format, ...)
{
	va_list args;
<<<<<<< HEAD

	va_start(args, format);
=======

	va_start(args, format);

	if (format == NULL) {
		return (-1);
	}

	format_copy = malloc (strlen(format) + 1);
	if (format_copy == NULL)
	{
		return (-1);
	}

	strcpy(format_copy, format);

	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '\0')
			{
				free(format_copy);
				return (-1);
			}
			else if (*ptr == 'd' || *ptr == 'i')
			{
				int value = va_arg(args, int);
				return rune_d(value);
			}
			else if (*ptr == 'c')
			{
				int ch = va_arg(args, int);
				putchar(ch);
				count++;
			}
			else if (*ptr == 's')
			{
				const char *str = va_arg(args, const char *);
				fputs(str, stdout);
				count += strlen(str);
			}
			else if (*ptr == '%')
			{
				putchar('%');
				count++;
			}
			else
			{
				putchar('%');
				putchar(*ptr);
				count += 2;
			}
		}
		else
		{
			putchar(*ptr);
			count++;
		}
		ptr++;
	}
>>>>>>> 928255b9a449a1bbfb98625158095a8541c82211

	int count = process(format, args);

	va_end(args);

	return (count);

	return (0);
}
