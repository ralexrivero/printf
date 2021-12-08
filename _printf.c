#include "main.h"
#define BUFFER_SIZE 1024
/**
 * _printf - emulate the original printf
 * @format: string to print and format by specifier
 * Description: prints better than the original printf, belive in that
 * Return: lenght of the output
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, len = 0;

	va_start(list, format);
	if ((!format) || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (; (format && format[i]); i++)
	(format[i] == '%') ? (len += specifier(&i, format, list))
		: (len += _putchar(format[i]));
		va_end(list);
	return (len);
}
