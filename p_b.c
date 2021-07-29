#include "holberton.h"
/**
 * p_b - convert decimal to nary. Base 10 to Base 2
 * @p: argument pointer
 * Description: reverse the module on recursive division
 * Return: length of the binary number
 */
int p_b(va_list p)
{
	unsigned int n = va_arg(p, int), rever_string[1000];
	int  position = 0, i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		rever_string[position] = n % 2;
		n /= 2;
		position++;
	}
	for (i = position - 1; i >= 0; i--)
	{
		_putchar(rever_string[i] + '0');
	}
	return (position);
}
