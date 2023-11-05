#include "main.h"
/**
 * _printf - prints characters or string of characters with multiple variables
 * @format: A format string containing format specifiers
 * @...: Variable number of arguments to be formatted and printed.
 * Return: length of string or -1 if failure
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;

	va_start(args, format);

	count = process_format(format, args);

	va_end(args);

	return (count);
}
