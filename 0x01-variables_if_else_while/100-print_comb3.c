#include <stdio.h>
/**
 * * main - Entry point
 *  * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b = '0';

	for (; a <= '9'; a++)
	{
		for (b =  a + 1; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			if (a != '8')
			{
				putchar(',');
				putchar(' ');
			}

	}
	}
	putchar(10);
	return (0);
}
