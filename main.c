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

_printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");
_printf("Percent:[%%]\n");
printf("Percent:[%%]\n");
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("Character:[%c]\n", 'M');
printf("Character:[%c]\n", 'M');
_printf("");
printf("");
_printf("hola: %c Colo y Joaco\n", 'd');
printf("hola: %c Colo y Joaco\n", 'd');
_printf("\n");
printf("\n");
_printf("finish %s\n", "now");
printf("finish %s\n", "now");
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
return (0);
}

