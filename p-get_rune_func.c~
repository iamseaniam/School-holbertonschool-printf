#include "main.h"
/**
 *rune_d - Print an integer value.
 *@value: The integer value to be printed.
 *Return: Always returns 0.
 */
int rune_d(int value)
{
	putchar_file(value + '0', stdout);
	return (0);
}
/**
 *rune_c - Print a character value.
 *@value: The character value to be printed.
 *Return: Always returns 0.
 */
int rune_c(int value)
{
	putchar_file(value, stdout);
	return (0);
}

/**
 *rune_s - Print a string.
 *@value: The integer representation of a string to be printed.
 *Return: Always returns 0.
 */
int rune_s(int value)
{
	int i;

	const char *str = (const char *)&value;
	int length = strlen(str);
	for (i = 0; i < length; i++)
	{
		putchar_file(str[i], stdout);
	}
	return (length);
}
/**
 *get_rune_func - Get a function pointer based on a character.
 *@s: The character to look up in the function pointer array.
 *Return: A function pointer corresponding to the character, or NULL if not found.
 */
int (*get_rune_func(char *s))(int)
{
	frog sword[] = {
		{"d", rune_d},
		{"i", rune_d},
		{"c", rune_c},
		{"s", rune_s},
		{NULL, NULL}
	};

	int i = 0;

	while (sword[i].skittle != NULL)
	{
		if (strcmp(sword[i].skittle, s) == 0)
		{
			return (sword[i].f);
		}
		i++;
	}

	return (NULL);
}
