#include <stdio.h>
/**
 * * main - Entry point
 *  * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
