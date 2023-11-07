#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *  * struct frog - Format specifier and associated function pointer.
 *   * @specifier: A pointer to a string representing the format specifier.
 *    * @function: A function pointer to the corresponding format function.
 *     */
typedef struct frog
{
		char *specifier;
			int (*function)(va_list args);
} frog;

/* Declaring the sword array present in format.c */
extern frog sword[];

/* Function prototypes */
int format(char format, va_list args);
int process(const char *format, va_list args);
int _printf(const char *format, ...);
int _putint(int value);
int _putstring(va_list args);
int _putchar(char c);

#endif
