#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 0, len2 = 0;

	len = _printf("%S", "No special character.");
	putchar('\n');
	len2 = printf("No special character.");
	putchar('\n');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	_printf("%S\n", "Best\nSchool");

	len = _printf("%S", "\n");
	putchar('\n');
	len2 = printf("\\x0A");
	putchar('\n');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	putchar('\n');
	len2 = printf("\\x01\\x02\\x03\\x04\\x05\\x06\\x07");
	putchar('\n');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	putchar('\n');
	len2 = printf("Could you print some non-prntable characters?\nSure:\\x1F\\x7F\\x0A\nThanks!\n");
	putchar('\n');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("");
	putchar('\n');
	len2 = printf("");
	putchar('\n');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	len = _printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	putchar('\n');
	len2 = printf("- What did you say?\n- %s\n- That's what I thought.\n", "");
	putchar('\n');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}