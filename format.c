#include "main.h"

/**
 * format - uses a switch statement to handle different format specifiers
 * @args: The value to be printed
 * @format: The format specifier
 * Return: 0 if successful
 */
int format(char format, va_list args)
{
	if (format == 'd' || format == 'i')
	{
		int value = va_arg(args, int);
		return print_int(value);
	}
	else if (format == 'c')
	{
		int value = va_arg(args, int);
		return print_char(value);
	}
	else if (format == 's')
	{
		const char *value = va_arg(args, const char *);
		return print_string(value);
	}
	else
	{
		print_string("Invalid format specifier: ");
		print_char(format);
		print_char('\n');
		return -1;
	}
}
