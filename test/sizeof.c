#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int size = 0;

	typedef struct prueba
	{
		char *puntero;
		int (*punterofuncion)(va_list p);
	} prueba_t;

	prueba_t arreglo[] = {
		{"b", p_b},
		{"c", p_c},
		{"d", p_d},
	};

size = sizeof(prueba_t);
printf("sizeof prueba_t: %i\n", size);
printf("sizeof arreglo: %li\n", sizeof(arreglo));
printf("registros: %li\n", sizeof(arreglo)/sizeof(prueba_t));
return (0);
}
