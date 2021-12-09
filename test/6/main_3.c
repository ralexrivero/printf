#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	void *p = (void *)0x7fff5100b6f8;
	void *p2 = (void *)0x7faf51f0f608;
	void *p3 = (void *)0x6ff42510b6f8;
	void *p4 = (void *)0x7fff510236f8;

	len = _printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", p, p2, p3, p4);
	len2 = printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", p, p2, p3, p4);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}