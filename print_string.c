#include "main.h"
/**
 * print_string - prints a string of characters
 * @args: va_list containing the variable arguments to be formatted & printed
 * Return: length of string
 */
int print_string(va_list args)
{
	const char *str = va_arg(args, const char *);

	if (str)
	{
		fputs(str, stdout);
		return (strlen(str));
	}
	else
	{
		fputs("NULL", stdout);
		return (4);
	}
}
