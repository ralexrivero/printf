#include "../printf.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char len[] = "Hola tu";

_printf("Let's try to printf a simple sentence.\n");
_printf("reverse:%s: %r\n", "revesed string");
_printf("reverse:%s %r\n", "123456789");
_printf("reverse:%r\n", len);
return (0);
}
