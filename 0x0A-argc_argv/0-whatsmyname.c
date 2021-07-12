#include <stdio.h>
/**
 * main - Starting function to print name of program.
 * @argc: count of args.
 * @argv: vector value taken from command line.
 * Return: argc.
 */
int main(int argc, char *argv[])
{
	int x;

	x = argc;
	printf("%s\n", argv[0]);
	return (x);
}
