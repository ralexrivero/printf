#include "holberton.h"

int p_c(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}

int p_s(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}

/**
 * p_p - print percent
 * @p: argument pointer
 * Return: 1
 */
int p_p(va_list __attribute__((unused)) p)
{
	_putchar('%');
	return (1);
}

int p_d(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}

int p_i(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}

int p_b(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}

int p_u(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}

int p_o(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}

int p_x(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}

int p_Xt(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}

int p_St(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}

int p_r(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}

int p_Rt(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}