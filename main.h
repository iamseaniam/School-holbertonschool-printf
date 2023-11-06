#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/**
 * _printf - prints characters or string of characters with multiple variables
 * process - processes the format specifier
 * format - passes format and value to correct function to be printed
 * print int - converts integers into a string and passes to print function
 * print_char - prints a single character
 * print_string - prints a string
 */

int _printf(const char *format, ...);
int process(const char *format, va_list args);
int format(char format, va_list args);
int print_int(int value);
int print_char(va_list args);
int print_string(va_list args);

#endif
