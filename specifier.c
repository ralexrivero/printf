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
		{"c", p_c}, {"s", p_s}, {"%", p_p},
		{NULL, NULL},
	};
	int size = 3; /*14*/


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
