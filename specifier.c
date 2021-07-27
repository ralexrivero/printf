#include "holberton.h"
/**
 * specifier - looks for the specifier and call prototypes
 * @i: member i
 * @format: string from _printf
 * @list: the list of arguments
 * Return: length of output
 */
int specifier(int *i, const char *format, va_list list)
{
	int len2 = 0, k = *i, l = 0, m = 0;

	mark_t spec[] = {
		{"c", p_c}, {"s", p_s}, {"%", p_p},
		{"d", p_d}, {"i", p_i},
		{"b", p_b},
		{"u", p_u}, {"o", p_o}, {"x", p_x}, {"X", p_Xt},
		{"S", p_St},
		{"p", p_pt},
		{"r", p_r}, {"R", p_Rt},
		{NULL, NULL},
	};
	int size = 14;

	
	while (l < size)
	{
		if (*(spec[l].opointer) == format[k + 1])
		{
			len2 += spec[l].fpointer(list);
			*i += 1;
		}
		else
		{
			m++;
		}
		l++;
	}

	if (m == size)
	{
		_putchar(format[k]);
		len2++;
	}

	return (len2);
}
