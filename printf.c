#include "holberton.h"

/**
 * _printf - emulate the original printf
 * @format: string to print and format by specifier
 * Description: create our own variadic prototype
 * Return: lenght of the output
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int len = 0;
	/* va_list list; */

	if (format)
	{
		/* va_start(list, format); */
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
					case 's':
						/* _putchar(p_str(va_arg(list,char *))); */
						break;
					case 'd':
						/* _putchar(p_int(va_arg(list,int))); */
						break;
					case '%':
						_putchar(37);
						break;
					case '\n':
						_putchar('\n');
						break;
				}
			}
		}
		/* va_end(list); */
	}
	return (len);
}
