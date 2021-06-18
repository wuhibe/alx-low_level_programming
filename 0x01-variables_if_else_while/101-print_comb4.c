#include <stdio.h>
/**
 * * main - Entry point
 *  * Return: Always 0 (Success)
 */

int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';

	for (; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9' ; b++)
		{
			for (c = b + 1; c <= '9' ; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
