#include "holberton.h"
/**
 * p_b - convert decimal to binary. Base 10 to Base 2
 * @p: argument pointer
 * Description: reverse the module on recursive division
 * Return: length of the binary number
 */
int p_b(va_list p)
{
	unsigned int bin = va_arg(p, int), buff[1000];
	int  count = 0, i;

	if (bin == 0)
	{
		_putchar('0');
		return (1);
	}

	while (bin > 0)
	{
		buff[count] = bin % 2;
		bin /= 2;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(buff[i] + '0');
	}
	return (count);
}
