#include "holberton.h"
/**
 * p_r - print reversed string
 * @p: argument pointer
 * Return: length of the output sent to the output
 */
int p_r(va_list p)
{
	int li, ri, len2;
	// int i = 0, len2 = 0;
	char *s = va_arg(p, char*);

	if (!s)
	{
		s = "(null)";
	}
	for (li = 0; s[li] != '\0'; li++)
	;
	for (ri = (li - 1); ri >= 0; ri--)
	{
	_putchar(s[ri]);
	}
return (len2);
}