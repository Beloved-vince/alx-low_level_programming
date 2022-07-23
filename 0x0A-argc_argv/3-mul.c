#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Size of input data
 * @argv: data to be inserted
 * Return: multiplication of argv(two data) integer
 */
int main(int argc, char *argv[])
{
	int to_int;

	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
		to_int = atoi(argv[1]) * atoi(argv[2]);
		printf("%d \n", to_int);

		return (0);
}
