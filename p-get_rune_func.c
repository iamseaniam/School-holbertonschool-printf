#include <stdio.h>
#include <string.h>
#include "main.h"

int rune_d(int value)
{
	printf("%d", value);
	return (0);
}

int rune_u(int value)
{
	printf("%u", value);
	return (0);
}

int rune_f(int value)
{
	float f_value = *(float*)&value;
	printf("%f", f_value);
	return (0);
}

int rune_c(int value)
{
	printf("%c", value);
	return (0);
}

int rune_s(int value)
{
	const char *str = (const char *)&value;
	printf("%s", str);
	return (0);
}

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
