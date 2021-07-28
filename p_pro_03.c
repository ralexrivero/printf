#include "holberton.h"
/**
 * p_b - convert to binary the unsigned int
 * @p: argument pointer
 * Return: lenght of the string
 */
 int p_b(va_list p)
 {
	unsigned int binary = va_arg(p, int), buff[1000];
	int  len2 = 0, i;

	if (binary == 0)
	{
		_putchar('0');
		return (1);
	}
	while (binary > 0)
	{
		buff[len2] = binary % 2;
		len2 += binary /= 2;
	}
	for (i = len2 - 1; i >= 0; i--)
	{
		_putchar(buff[i] + '0');
	}
	return (len2);
 }
 