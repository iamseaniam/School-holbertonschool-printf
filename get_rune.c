#include "main.h"
/**
* get_rune - searches for matching format spec. & calls the rune function
 * @s: The format specifier
 * @value: The value to be printed
 * Return: 0 if successful, -1 if an invalid format specifier is provided
 */
int get_rune(char s, int value)
{
	switch (s)
	{
		case 'd':
		case 'i':
		case 'u':
		case 'f':
		case 'c':
		case 's':
			return (rune(value, s));
		default:
			printf("Invalid format specifier: %c", s);
			return (-1);
	}
}
