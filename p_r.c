#include "holberton.h"
/**
 * p_r - print reversed string
 * @p: argument pointer
 * Return: length of the output sent to the output
 */
int p_r(va_list p)
{
	int li, ri, lenr;
	char *s = va_arg(p, char*);

	if (!s)
	{
		s = "(null)";
	}
	for (li = 0; s[li] != '\0'; li++)
	;
	for (ri = (li - 1); ri >= 0; ri--)
	{
	lenr += _putchar(s[ri]);
	}
return (lenr);
}
