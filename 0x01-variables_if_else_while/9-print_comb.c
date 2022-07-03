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

	for (single_digit = 48; single_digit < 58; single_digit++)
	{
		putchar(single_digit);
		if (single_digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

		putchar('\n');

	return (0);
}
