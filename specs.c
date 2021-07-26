#include "holberton.h"

/**
 * p_s - print strin
 *@c: string to check
 *
 *Return: always 0
 */

int p_s(char *c)
{
	int i = 0;
	
	{
		if (c)
		while (c[i] != '\0')
			i++;
		_putchar(c[i]);
	}

	return (i);
}
