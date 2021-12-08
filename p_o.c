#include "printf.h"
/**
 * p_o - print in octal format
 * @p: The argument pointer.
 * Description: This function prints a octal number.
 * Return: the length of string
 */
int p_o(va_list p)
{
	unsigned int octal = va_arg(p, int), buff[1000];
	int  count = 0, i;

	if (octal == 0)
	{
		_putchar('0');
		return (1);
	}

	while (octal > 0)
	{
		buff[count] = octal % 8;
		octal /= 8;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(buff[i] + '0');
	}
	return (count);
}

