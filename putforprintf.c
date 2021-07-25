#include "holberton.h"

/**
 * Description: print int
 * Return: the value for switch in _printf
 */

int p_int(int numero)
{
	int x = numero, i = 0;

	if (numero)
		{
			if (numero < 0)
			{
				_putchar('-');
				x = -x;
			}
			if ()
				//nose como seguir
		}
	return ();
}

/**
 * Descripcion - print a string of char
 * @c: pointer to string
 */
int p_str(char *c)
{
	if (c)
	{
		for (int i = 0; c[i] != '\0'; i++)
		{
			_putchar(c[i]);
		}
	}
	return (i);
}
