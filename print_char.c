#include "main.h"
/**
 * print_char - prints a single character
 * @args: va_list containing the variable arguments to be formatted & printed
 * Return: Always 1
 */
int print_char(va_list args)
{
	int ch = va_arg(args, int);

	putchar(ch);

	return (1);
}
