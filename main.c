#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%S\n", "Holberton\nSchool");
	_printf("%S\n", "No special character.");
	_printf("%S\n", "\n");
	_printf("%S\n", "\x01\x02\x03\x04\x05\x06\x07");
	_printf("");
	_printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	return (0);
}
