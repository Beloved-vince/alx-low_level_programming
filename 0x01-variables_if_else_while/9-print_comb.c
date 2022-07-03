#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int single_digit;

	for(single_digit = 48; single_digit < 58; single_digit++)
	{
		putchar(single_digit);
		putchar(',');
		putchar(' ');
	}

		putchar('\n');

	return (0);
}
