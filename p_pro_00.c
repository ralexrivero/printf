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
/**
 * p_s - print string
 * @p: argument pointer
 * Return: 1
 */
int p_s(va_list p)
{
	int i = 0;
	char *s;

	s = va_arg(p, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
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

/**
 *  int p_d(va_list p)
 * {
 *	int ch = (char)va_arg(p, int);
 *
 *	_putchar(ch);
 * }
 */

/**
 * p_i - print integer
 * @p: argument pointer
 * Return: 1
 */

/**
 * int p_i(va_list p)
 * {
 *	int ch = (char)va_arg(p, int);
 *
 *	_putchar(ch);
 * }
 */
