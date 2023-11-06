#ifndef MAIN_H
#define MAIN_H

typedef struct
{
	char *skittle;
	int (*d)(int);
} frog;

int rune_d(int); /* %d or %i: printing signed decimal integers*/
int rune_u(int); /* %u: printing unsigned decimal integers*/
int rune_f(int); /* %f: printing floating-point numbers*/
int rune_c(int); /* %c: printing characters*/
int rune_s(int); /* %s: printing strings*/
int rune_x(int); /* %x or %X: printing hexadecimal integers*/
int rune_o(int); /* %o: printing octal integers*/
int rune_p(int); /* %p: printing pointers*/
int (*get_rune_func(char *s))(int);
int _printf(const char *format, ...); /* Prototype for Print.c */
#endif
