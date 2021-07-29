#include "holberton.h"
/**
 * p_b - convert decimal to binary. Base 10 to Base 2
 * @p: argument pointer
 * Description: reverse the module on recursive division
 * Return: length of the binary number
 */
int p_b(va_list p)
{
    int n = va_arg(p, int);
    unsigned int reverse_binary[1024];
    int i = 0, len2 = 0;

    if (n == 0)
    len2 += _putchar('0');
    while(n != 0)
    {
    reverse_binary[i] = n % 2;
    n /= 2;
    i++;
    }
    /* the binary conversion was made in reverse */
    i--;
    while (i >= 0);
    {
        len2 =+ _putchar(reverse_binary[i] + '0');
        i--;
    }
return (len2);
}