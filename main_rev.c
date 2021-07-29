#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
int len2;
unsigned int ui;
void *addr;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
ui = (unsigned int)INT_MAX + 1024;
addr = (void *)0x7ffe637541f0;
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("reverse: %r\n", "revesed string");
_printf("reverse: %r\n"), "123456789";
_printf("reverse: %r\n", len);
return (0);
}
