#include "holberton.h"
/**
 * p_b - convert to binary the unsigned int
 * @p: argument pointer
 * Return: lenght of the string
 */
int p_b(va_list p)
{
unsigned int b = va_arg(p, int), c, buffer[1024];
int i, j, len2;

c = b;
i = 0;
j = 0;
len2 = 0;
while (b > 0)
{
buffer[i] = c % 2;
b /= 2;
i++;
}
for (j = (i - 1); j >= 0; --j)
{
len2 += _putchar(buffer[j]);
}
return (len2);
}
