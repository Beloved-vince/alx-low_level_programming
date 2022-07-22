#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 * @argc: The size of arguement to printed
 * @argv: String to be printed in loop
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)

	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
