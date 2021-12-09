#include "main.h"
int aux_hex(int n);
/**
 * p_Su - conversion specifier S
 *
 * Non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way: \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 * @p: argument pointer
 * Return: length of the string
 */
int p_Su(va_list p)
{
	int i = 0, count = 0;
	char *ptrChr_str = va_arg(p, char*);

	if (ptrChr_str == NULL)
		return (write(1, "(null)", 6));

	while (ptrChr_str[i] != '\0')
	{
		if (ptrChr_str[i] >= 32 && ptrChr_str[i] < 127)
			count += _putchar(ptrChr_str[i]);
		else
		{
			count += aux_S_hex(ptrChr_str[i]);
		}
		i++;
	}
	return (count);
}
