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
}
/**
 * p_s - print string
 * @p: argument pointer
 * Return: 1
 */
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
/**
 * p_d - print double
 * @p: argument pointer
 * Return: 1
 */
int p_d(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}
/**
 * p_c - print integer
 * @p: argument pointer
 * Return: 1
 */
int p_i(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}
/**
 * p_b - print binary
 * @p: argument pointer
 * Return: 1
 */
int p_b(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}
/**
 * p_u - print xxx
 * @p: argument pointer
 * Return: 1
 */
int p_u(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}
/**
 * p_o - print xxx
 * @p: argument pointer
 * Return: 1
 */
int p_o(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}
/**
 * p_x - print x
 * @p: argument pointer
 * Return: 1
 */
int p_x(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}
/**
 * p_Xt - print xxx
 * @p: argument pointer
 * Return: 1
 */
int p_Xt(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}
/**
 * p_St - print xxx
 * @p: argument pointer
 * Return: 1
 */
int p_St(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}
/**
 * p_r - print xxx
 * @p: argument pointer
 * Return: 1
 */
int p_r(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}
/**
 * p_Rt - print xxx
 * @p: argument pointer
 * Return: 1
 */
int p_Rt(va_list p)
{
	int ch = (char)va_arg(p, int);
	_putchar(ch);
}