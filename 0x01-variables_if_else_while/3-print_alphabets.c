#include <stdio.h>
/**
 *main - Entry Point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char Capital_letter = 'A';
	char Small_letter = 'a';

	while (Small_letter <= 'z')

	{
		putchar(Small_letter);
		Small_letter++;
	}
	while (Capital_letter <= 'Z')
	{
		putchar(Capital_letter);
		Capital_letter++;
	}

		putchar('\n');
	return (0);
}
