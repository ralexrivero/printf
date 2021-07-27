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
  * p_Rt - rot13
  * @p: p
  * Return: contador
  */
int p_Rt(va_list __attribute__((unused)) p)
{
	char *a = va_arg(p, char*);
	int j;
	int i;
	int cont = 0;
	char a1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char a2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (j = 0; a[j] != '\0'; j++)
	{
		for (i = 0; a1[i] != '\0'; i++)
		{
			if (a[j] == a1[i])
			{
				_putchar (a2[i]);				
				cont++;
			}
			else
			{
				_putchar (a[i]);
				cont++;
			}
		}
	}
	return (cont);
}
