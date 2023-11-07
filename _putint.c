#include "main.h"

/**
 * _putint - prints an integer value
 * @args: The integer value to be printed
 * Return: The number of digits printed
 */
int _putint(va_list args)
{
	char buffer[12], temp;
	int value, index, is_negative, char_count, i, j, k;

	value = va_arg(args, int);
	index = 0;
	is_negative = 0;
	char_count = 0;

	if (value == 0)
	{
		buffer[index++] = '0';
		char_count = 1;
	}	else if (value < 0)
	{
		is_negative = 1;
		value = -value;
	}	while (value > 0)
	{
		buffer[index++] = '0' + (value % 10);
		value /= 10;
	}	char_count = index;

	if (is_negative)
		buffer[index++] = '-';

	for (i = 0, j = index - 1; i < j; i++, j--)
	{
		temp = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = temp;
	}	buffer[index] = '\0';

	for (k = 0; k < index; k++)
		_putchar(buffer[k]);

	return (char_count);
}
