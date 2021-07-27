#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
/* #include <unistd.h> */
#include <limits.h>
#include <float.h>
/**
 * struct mark - sructure for format
 * Description: type to define the behavior of specifier
 * @opointer: first member
 * @fpointer: second member
 */
typedef struct mark
{
	char *opointer;
	int (*fpointer)(va_list p);
} mark_t;

int _printf(const char *format, ...);
int specifier(int *i, const char *format, va_list list);
int _putchar(char c);

/* all calls from specifier */
int p_c(va_list p);
int p_s(va_list p);
int p_p(va_list __attribute__((unused)) p);
int p_d(va_list p);
int p_i(va_list p);
int p_b(va_list p);
int p_u(va_list p);
int p_o(va_list p);
int p_x(va_list p);
int p_Xt(va_list p);
int p_St(va_list p);
int p_pt(va_list p);
int p_r(va_list p);
int p_Rt(va_list p);

#endif