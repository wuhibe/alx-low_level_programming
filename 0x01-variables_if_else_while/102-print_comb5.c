#include <stdio.h>
/**
 * * main - Entry point
 *  * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b;
	int c;
	int d;

	for (; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if ((a < c) || (a == c && b < d))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
					if (!(a == '9' && b == '8'))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
