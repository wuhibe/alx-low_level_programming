#include <stdio.h>
/**
 * main - Starting function to print name of program.
 * @argc: count of arguments
 * @argv: vector value taken from command line.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", argv[0]);
	return (0);
}
