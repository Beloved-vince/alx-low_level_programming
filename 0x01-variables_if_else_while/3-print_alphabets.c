#include <stdio.h>
/**
 *main - Entry Point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char Capital_letter ='A';
	char Small_letter = 'a';
	
	while ( Small_letter <= 'Z' && Capital_letter <= 'z')
	{
		putchar(Small_letter);
		putchar(Capital_letter);
		
		Small_letter = Small_letter + 1;
		Capital_letter = Capital_letter +1;
	}
		putchar('\n');
}		
