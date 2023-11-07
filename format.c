#include "main.h"

/**
 * format - uses a switch statement to handle different format specifiers
 * @format: The format specifier
 * @args: The value to be printed
 * Return: 0 if successful
 */
int format(char format, va_list args)
{
	int i;

	frog sword[] = {
		{"d", _putint},
		{"i", _putint},
		{"c", _putchar},
		{"s", _putstring},
		{NULL, NULL}
		};

	for (i = 0; sword[i].specifier != NULL; i++)
	{
		if (sword[i].specifier[0] == format)
		{
			return (sword[i].function(args));
		}
	}

	if (format == 's')
	{
		const char format_str;

		format_str[2] = {format, '\0'};
		write(1, format_str, 1);
		write(1, "\n", 1);
		return (-1);
	}
	return (-1);
}
