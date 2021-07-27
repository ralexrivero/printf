#include "holberton.h"

/**
 * _printf - emulate the original printf
 * @format: string to print and format by specifier
 * Description: create our own variadic prototype
 * Return: lenght of the output
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
	va_list list;
	int flag = 0;

	if (format == NULL || format[i] == '\n' || format[i] == '\0' ||
	   (format[i] == '%' && !format[i + 1]))
	{
		return (-1);
	}
	if (format)
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
				switch (format[i])
				{
					case 'c':
						len += _putchar(va_arg(list, int));
						break;
					case 's':
						len += p_s(va_arg(list, char *));
						break;
					case '%':
						len += _putchar(37);
						break;
					default:
						len += _putchar(format[i]);
				}
				flag = 0;
			}
		}
		va_end(list);
	}
	return (len);
}

