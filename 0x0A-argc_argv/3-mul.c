#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting function to multiply two numbers
 * @argc: argument count
 * @argv: vector value of args
 * Return: 0 or 1
 **/
int main(int argc, char *argv[])
{
	int mult;

	mult = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}
