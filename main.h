#ifndef MAIN_H
#define MAIN_H

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
#endif
