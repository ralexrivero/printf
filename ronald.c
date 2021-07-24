#include "holberton.h"


int main(void)
{
	int i;
	char str[] = "ola%que ase";

	for (i = 0; (str[i] != '\0') ^ (str[i] == '%'); i++)
	putchar(str[i]);
	return (i);
}
