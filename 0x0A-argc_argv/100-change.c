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
				return (1);

			else
				i++;
		}

	}
	return (0);
}

/**
 * main - starting func to calculate change
 *
 * @argc - count of args
 * @argv - value of args
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x = 0, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (check(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	x = x + atoi(argv[1]);

	if (x >= 25)
	{
		while (x >= 25)
		{
			change += 1;
			x = x - 25;
		}
	}

	if (x >= 10)
	{
		while (x >= 10)
		{
			change += 1;
			x = x - 10;
		}
	}
	if (x >= 5)
	{
		while (x >= 5)
		{
			change += 1;
			x = x - 5;
		}
	}

	if (x >= 2)
	{
		while (x >= 2)
		{
			change += 1;
			x = x - 2;
		}
	}

	if (x >= 1)
	{
		while (x >= 1)
		{
			change += 1;
			x--;
		}
	}


	printf("%d\n", change);

	return (0);
}
