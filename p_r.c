#include "holberton.h"
/**
 * p_r - print reversed string
 * @p: argument pointer
 * Return: length of the output string
 */
int p_r(va_list p)
{
	int li = 0, ri = 0;
	char *s = va_arg(p, char*);

	if (!s)
	{
		s = "(null)";
	}
	while (s[i])
	i++;
	
	for (ri = li - 1; ri >= 0; ri--)
	{
	_putchar(s[ri]);
	}
return (li);
}
