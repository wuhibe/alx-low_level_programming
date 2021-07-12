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
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i])))
		{
			sum += atoi(argv[i]);
		}

	       else
		{
			printf("Error\n");
			return (1);
		}
	}
		printf("%d\n", sum);
		return (0);

}
