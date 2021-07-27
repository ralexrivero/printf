#include "holberton.h"
/**
 *_putchar - writes the character c to stdout
 *@c: The char to print
 *Return: On succes 1, on error -1
 *putchar uses a local buffer of 1024 to call write
 * as little as possible
 *
 */
int _putchar(char c)
{
	// static char buf[1024];
	// static int i;

	// if (c == -1 || i >= 1024)
	// {
	// 	write(1, &buf, i);
	// 	i = 0;
	// }
	// if  (c != -1)
	// {
	// 	buf[i] = c;
	// 	i++;
	// }
	// return (1);
	write(1, &c, 1);
	return (1);
}
