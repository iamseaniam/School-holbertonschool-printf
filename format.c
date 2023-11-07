#include "main.h"
/**
 * format - uses a switch statement to handle different format specifiers
 * @args: The value to be printed
 * @format: The format specifier
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

	_putstring("Unknown format specifier: ");
	_putchar(format);
	_putchar('\n');
	return (-1);
}
