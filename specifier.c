#include "holberton.h"

int specifier(int *i, const char *format, va_list list)
{
	int len2 = 0, k = *i, l = 0, m = 0;
/**
 * specifier - looks for the specifier and call prototypes
 * @len2: length of the string
 * @l: iterator for list_t in every c,s,%,d...
 */
	list_t spec[] = {
		{"c", p_c},
		{"s", p_s},
		{"%", p_p},
		{"d", p_d},
		{"i", p_i},
		{"b", p_b},
		{"u", p_u},
		{"o", p_o},
		{"x", p_x},
		{"X", p_Xt},
		{"S", p_St},
		{"r", p_r},
		{"R", p_Rt},
		{NULL, NULL},
	};
	
	for (; l < 13; l++)
	{
		if(*(spec[l].opointer) == format[k + 1])
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

	if (m == 13)
	{
		len2 += _putchar(format[k]);
	}
	return (len2);
}
