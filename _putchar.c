#include <unistd.h>
#include "main.h"
/**
 * _putchar - uses write to print char c
 * @c: char to print
 * Return: 1 if sucess, -1 if failure
 */
int _putchar(char c)
{
	char buffer[1], character;
	int bytes_written;

	buffer[0] = c;
	character = (char)c
	bytes_written = write(1, buffer, 1);

	if (bytes_written == -1)
	{
		write(STDERR_FILENO, "Write error\n", 12);
	}
	return ((bytes_written == 1) ? 1 : -1);
}
