#include "holberton.h"

/* hola soy colo empece con esto porque me tranque con los putchat,
 * hice solo que imprimiera una cadena y lo que ya habia hecho. */

int _printf(const char *format, ...)
{
	unsigned int i;
	va_list list;
	cout = 0;

	if (format)
	{
		va_start(list, format);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
			}
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 's':
						cout = p_str(va_arg(list,char *));
						break;
					//case 'd':
					//	cout = p_int(va_arg(list,int));
					//	break;
					case '%':
						cout = _putchar(37);
						break;
					case '\n':
						cout = _putchar('\n');
						break;
				}
			}
		}
		va_end(list);
	}
	return (cout);
}
