#include <limits.h>
#include <stdio.h>
#include "../printf.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("Unknown:[%b]\n", 15);
    _printf("Unknown:[%b]\n", 16);
	_printf("Unknown:[%b]\n", 1200);
	_printf("Unknown:[%b]\n", 800);
    return (0);
}