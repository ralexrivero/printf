#include "holberton.h"
/**
 * _printf - emulate the original printf
 * @format: string to print and format by specifier
 * Description: prints better than the original printf, belive in that
 * Return: lenght of the output
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, flag = 0;
	va_list list;

	va_start(list, format);
	if ((!format || (format[0] == '%' && !format[1])) || (format[0] == '%' && format[1] == ' ' && !format[2]) || (format[i] == '%' && !format[i + 1]))
	return (-1);
	if (format && format[i])
	{va_start(list, format);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (!flag)
			{
				if (format[i] != '%')
					len += _putchar(format[i]);
				else
					flag = 1;
			}
			else
			{
				len += specifier(&i, format, list);
				flag = 0;
			}
		}
		va_end(list);
	}
	return (len);
}
