#include "main.h"

/**
 * aux_S_hex - auxiliar to convert special ascii chars his hexa code
 *
 * @n: number to convert
 * Return: the lenght of the output sended to stdout
 */
int aux_S_hex(int n)
{
	/* return lenght of output */
	int count = 0, temp = 0, i = 1;
	char hexa[2] = {48, 48};

	temp = n;
	while (temp != 0)
	{
		if ((temp % 16) < 10)
		{
			hexa[i] = (temp % 16) + 48;
			i--;
		}
		else
		{
			hexa[i] = (temp % 16) + 55;
			i--;
		}
		temp /= 16;
	}

	count += write(1, "\\x", 2);
	count += _putchar(hexa[0]);
	count += _putchar(hexa[1]);

	return (count);
}
