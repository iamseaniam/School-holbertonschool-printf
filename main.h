#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

<<<<<<< HEAD
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

=======
typedef struct
{
	char *skittle;
	int (*f)(int);
} frog;

int rune_d(int); /* %d or %i: printing signed decimal integers*/
int rune_f(int); /* %f: printing floating-point numbers*/
int rune_c(int); /* %c: printing characters*/
int rune_s(int); /* %s: printing strings*/
int (*get_rune_func(char *s))(int);
int _printf(const char *format, ...); /* Prototype for Print.c */
>>>>>>> 928255b9a449a1bbfb98625158095a8541c82211
#endif
