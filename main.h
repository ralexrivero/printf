#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <float.h>
#include <unistd.h>

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

/**
 * struct noncustom - non custom specifier
 * when a flag specifier is passed to _printf()
 * @sum: '+' character
 * @empty: ' ' character
 * @hash: '#' character
 */
typedef struct noncustom
{
	int sum;
	int empty;
	int hash;
} noncustom_t;
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
int p_Xu(va_list p);
int p_Su(va_list p);
int p_pt(va_list p);
int p_r(va_list p);
int p_Rt(va_list __attribute__((unused)) p);

/* auxiliar functions */
int aux_S_hex(int n);

#endif
