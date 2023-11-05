#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/**
 * frog - structure represents string 'skittle' and calls function 'd' to it
 * rune - processes format specifier determined by get_rune
 * get_rune - gets the format specifier
 * print_char - prints a single character
 * print_string - prints a string
 * _printf - prints characters or string of characters with multiple variables
 */
struct frog
{
	char *skittle;
	int (*d)(int);
};
int rune(int value, char format);
int get_rune(char s, int value);
int process_format(const char *format, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int _printf(const char *format, ...);

#endif
