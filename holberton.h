#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/* Prototype Putchar*/
int _putchar(char c);

/* Protptypes */

int _printf(const char *format, ...);

/**
 * struct - the format after %
 * @pm: parameter entered
 * @format: the format to apply
 */

typedef struct
{
	char *pm;
	void (*format)(va_list p);
} formating;

/* Basic prototypes for _printf */
int p_int(numero);
int p_str(*c);
void per(va_list p);

#endif

