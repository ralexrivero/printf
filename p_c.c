#include "holberton.h"

/**
 * p_c - print character
 * @p: argument pointer
 * Return: 1
 */

int p_c(va_list p)
{
	int ch = (char)va_arg(p, int);

	_putchar(ch);

	return (1);
}