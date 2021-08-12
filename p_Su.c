#include "holberton.h"
/**
 * p_Su - Non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way: \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 * @p: argument pointer
 * Description: print special characters
 * Return: length of the string
 */
int p_Su(va_list p)
{
	int i = 0, count = 0, ascii_step = 0, ascii_temp = 0, j = 1;
	char *ptrChr_str = va_arg(p, char*);
	char ascii_hexa [2] = {'0', '0'};

	if (ptrChr_str == NULL)
		return (write(1, "(null)", 6));

	while (ptrChr_str[i] != '\0')
	{
		if (ptrChr_str[i] >= 32 && ptrChr_str[i] < 127)
			count += _putchar(ptrChr_str[i]);
		else
		{
			write(1, "\\x", 3);
			count += 2;
			ascii_step = ptrChr_str[i];
			while (ascii_step != 0)
			{
				ascii_temp = ascii_step % 16;
				j = 1;
				if (ascii_temp >= 0 && ascii_temp < 10)
				{
					ascii_hexa[j] = '0' + ascii_temp;
					j--;
				}
				else if (ascii_temp >= 10 && ascii_temp < 16)
				{
					ascii_hexa[j] = 'A' + (ascii_temp - 10);
					j--;
				}
				ascii_step /= 16;

			}
				count += _putchar(ascii_hexa[0]);
				count += _putchar(ascii_hexa[1]);
		}
		i++;

	}
	return (count);
}
