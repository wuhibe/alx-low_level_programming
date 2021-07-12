#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * check - function to check number.
 * @s: string recieved from main
 * Return: 0 or 1.
 */
int check(char *s)
{
	int i = 0, j = strlen(s);

	while (i < j)
	{
		{
			if (s[i] < '0' || s[i] > '9')
				return (0);

			else
				i++;
		}

	}
	return (1);
}

/**
 * main - Starting function to multiply two numbers.
 * @argc: count of args.
 * @argv: vector value taken from command line.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check(argv[i]))
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
