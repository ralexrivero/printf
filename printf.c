#include "holberton.h"

/**
 * _printf - emulate the original printf
 * @format: string to print and format by specifier
 * Description: create our own variadic prototype
 * Return: lenght of the output
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	int len = 0;
	va_list list;

	if (format)
	{
		va_start(list, format);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				len++;
			}
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'c':
						_putchar(va_arg(list, int));
						i++;
						break;
					case 's':
						p_s(va_arg(list, char *));
						i++;
						break;
					case '%':
						_putchar(37);
						break;
				}
			}
		}
		 va_end(list);
	}
	return (len);
}
