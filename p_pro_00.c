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
 * Return: length of the string
 */
int p_p(va_list __attribute__((unused)) p)
{
	_putchar('%');
	return (1);
}
/**
  * p_Rt - rot13 encode string
  * @p: argument pointer
  * Return: integer number of characters printed to stdout
  */
int p_Rt(va_list p)
{
	int i = 0, j = 0, len2 = 0, flag = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s = va_arg(p, char*);
if (!s)
{
	s = "(null)";
}
for (i = 0; s[i] != '\0'; i++)
{
	flag = 0;
	for (j = 0; a[j] != '\0'; j++)
	{
		if (s[i] == a[j])
		{
		len2 += _putchar(b[j]);
			flag = 1;
		}
	}
	if (!flag)
	{
		len2 += _putchar(s[i]);
	}
}
return (len2);
}
