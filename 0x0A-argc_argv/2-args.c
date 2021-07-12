#include <stdio.h>
/**
 * main - Starting function to print series of arguments entered.
 * @argc: count of args.
 * @argv: vector value taken from command line.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
