#include "main.h"

/**
 * process_format - processes the format string
 * @format: format string containing format specifiers
 * @args: va_list containing variable arguments to be formatted and printed
 * Return: length of string or -1 if failure
 */
int process_format(const char *format, va_list args)
{
	int count = 0;

	while (*format)
	{
		if (*format == '%' && format[1])
		{
			if (format[1] == 'c' || format[1] == 's')
			{
				char format_specifier = format[1];

				count += get_rune(format_specifier, va_arg(args, int));
				format += 2;
			}
			else if (format[1] == '%')
			{
				putchar('%');
				count++;
				format += 2;
			}
			else
			{
				putchar('%');
				putchar(format[1]);
				count += 2;
				format += 2;
			}
		}
		else
		{
			putchar(*format);
			count++;
			format++;
		}
	}
	return (count);
}
