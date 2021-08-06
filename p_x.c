#include "holberton.h"

/**
 * p_x - convert decimal to hexadecimal in lowercase
 * @p: The argument pointer
 * Description: This function prints a unsigned hexadecimal
 * Return: the length of output
 */
int p_x(va_list p)
{
	unsigned int varULL_step = va_arg(p, int), varULL_temp = 0;
	char varChr_hexa_temp[1024];
	int i = 0, count = 0;

	if (varULL_step == 0)
	{
		_putchar('0');
		_putchar('0');
	}
	while (varULL_step != 0)
	{
		varULL_temp = varULL_step % 16;
		if (varULL_temp < 10)
		{
			varChr_hexa_temp[i] = varULL_temp + 48;
			i++;
		}
		else
		{
			varChr_hexa_temp[i] = varULL_temp + 87;
			i++;
		}
		varULL_step /= 16;
	}
	for (i = i - 1 ; i >= 0; i--)
	{
		count += _putchar(varChr_hexa_temp[i]);
	}
	return (count);
}

