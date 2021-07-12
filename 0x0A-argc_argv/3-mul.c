#include <stdio.h>
#include <stdlib.h>
/**
 * main - Starting function to multiply two numbers.
 * @argc: count of args.
 * @argv: vector value taken from command line.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	else
	{
		for (i = 1; i < 3; i++)
		{
		mult *= atoi(argv[i]);
		}
	printf("%d\n", mult);
	return (0);
	}
}
