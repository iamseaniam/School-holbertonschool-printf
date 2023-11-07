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

	va_start(args, format);

	int count = process(format, args);

	va_end(args);

	return (count);

	return (0);
}
