#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always o (success)
 *
 */
int main(void)
{
	char reverse_alpha = 'z';

	while (reverse_alpha >= 'a')

	{
		putchar(reverse_alpha);
		reverse_alpha--;
	}
		putchar('\n');
	return (0);
}
