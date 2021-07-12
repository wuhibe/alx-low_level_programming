#include <stdio.h>
/**
 * main - Starting function to print number of arguments.
 * @argc: count of arguments.
 * @argv: vector value of arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", argc);
	return (0);
}
