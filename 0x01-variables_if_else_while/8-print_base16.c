#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int hex;
	char decimal = 'a';

	for (hex = 48; hex < 58; hex++)
	{
		putchar(hex);
	}
	while (decimal < 'g')
	{
		putchar(decimal);
		decimal++;
	}
		putchar('\n');
	return (0);
}
