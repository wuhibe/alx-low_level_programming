#include <stdio.h>
/**
 * main - Starting function to print number of arguments.
 * @argc: count of arguments.
 * @argv: vector value of arguments.
 * Return: None.
 */
int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", argc - 1);
	return (0);
}
