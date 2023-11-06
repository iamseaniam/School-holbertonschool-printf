#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *rune_d - Print an integer value.
 *@value: The integer value to be printed.
 *Return: Always returns 0.
 */
int rune_d(int value)
{
	int count = printf("%d", value);
	return (count);
}

/**
 *rune_u - Print an unsigned integer value.
 *@value: The unsigned integer value to be printed.
 *Return: Always returns 0.
 */
int rune_u(int value)
{
	printf("%u", value);
	return (0);
}

/**
 *rune_f - Print a float value.
 *@value: The integer representation of a float value to be printed.
 *Return: Always returns 0.
 */
int rune_f(int value)
{
	float f_value = *(float*)&value;
	printf("%f", f_value);
	return (0);
}
/**
 *rune_c - Print a character value.
 *@value: The character value to be printed.
 *Return: Always returns 0.
 */
int rune_c(int value)
{
	printf("%c", value);
	return (0);
}

/**
 *rune_s - Print a string.
 *@value: The integer representation of a string to be printed.
 *Return: Always returns 0.
 */
int rune_s(int value)
{
	const char *str = (const char *)&value;
	printf("%s", str);
	return (0);
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
		{"u", rune_u},
		{"f", rune_f},
		{"c", rune_c},
		{"s", rune_s},
		{NULL, NULL}
	};

	int i = 0;

	while (sword[i].skittle != NULL)
	{
		if (strcmp(sword[i].skittle, s) == 0)
		{
			return (sword[i].d);
		}
		i++;
	}

	return (NULL);
}
