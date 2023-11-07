#include <unistd.h>
#include "main.h"
/**
 * _putchar - uses write to print char c
 * @args: char to print
 * Return: 1 if sucess, -1 if failure
 */
int _putchar(va_list args)
{
	char buffer[1];
	int bytes_written;

	buffer[0] = va_arg(args, int);

	bytes_written = write(1, buffer, 1);

	if (bytes_written == -1)
	{
		write(STDERR_FILENO, "Write error\n", 12);
		return (-1);
	}
	return (1);
}
