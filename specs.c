#include "holberton.h"

/**
 * p_int - print strin 
 */

int p_s(char *c)
{
    int i = 0;
    if (c)
	{
		while (c[i] != '\0')
		{
			_putchar(c[i]);
		}
        i++;
	}
	return (i);
}
