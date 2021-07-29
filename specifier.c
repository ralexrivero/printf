#include "holberton.h"
#define BUFFER_SIZE 1024
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
		/*{"b", p_b},*/
		{"c", p_c},
		{"d", p_d},
		{"i", p_d},
		{"o", p_o},
		{"%", p_p},
		{"r", p_r},
		{"R", p_Rt},
		{"s", p_s},
		{"u", p_u},
		{NULL, NULL},
	};
	int size = sizeof(spec)/sizeof(mark_t) -1;

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
