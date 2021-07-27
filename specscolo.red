#include "holberton.h"

/**
 * p_s - print strin
 *@c: string to check
 *
 *Return: always 0
 */

int p_s(char *c)
{
	int i;

	{
		if (c)
		for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
	}
	{
		if (!c)
			return (-1);
	}
	return (i);
}
