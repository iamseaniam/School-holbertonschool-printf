#include "main.h"

/**
 * rune - uses a switch statement to handle different format specifiers
 * @value: The value to be printed
 * @format: The format specifier
 * Return: 0 if successful, -1 if an invalid format specifier is provided
 */
int rune(int value, char format)
{
	switch (format)
	{
		case 'd':
		case 'i':
			printf("%d", value);
			break;
		case 'u':
			printf("%u", value);
			break;
		case 'f':
			{
				float f_value = *(float *)&value;

				printf("%f", f_value);
			}
			break;
		case 'c':
			printf("%c", value);
			break;
		case 's':
			printf("%s", (const char *)&value);
			break;
		default:
			printf("Invalid format specifier: %c", format);
			return (-1);
	}
	return (0);
}
