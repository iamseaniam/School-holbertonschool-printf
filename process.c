#include "main.h"
/**
 * process - processes the format string
 * @s: format string containing *s specifier
 * @args: va_list containing variable arguments to be formatted and printed
 * Return: length of string or -1 if failure
 */
int process(const char *s, va_list args)
{
	int count = 0, i;

	while (*s)
	{
		if (*s == '%' && s[1])
		{
			if (s[1] == '%')
			{
				_putchar('%');
				count++;
				s += 2;
			}
			else
			{
				for (i = 0; sword[i].specifier != NULL; i++)
				{
					if (sword[i].specifier[0] == s[1])
					{
						count += sword[i].function(args);
						s += 2;
						break;
					}
				}
			}
		} else
		{
			_putchar(*s);
			count++;
			s++;
		}
	}
	return (count);
}
