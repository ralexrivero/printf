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
	return(write(1, &c, 1));
}
