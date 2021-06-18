#include <stdio.h>
/**
 * * main - Entry point
 *  * Return: Always 0 (Success)
 */
int main(void)
{
	char x = '0';
	char y = 'a';
	for (; x <= '9' || y <= 'f'; x++)
	{
		if (x <= '9')
			putchar(x);
		else
		{
			putchar(y);
			y++;
		}
	}
	putchar(10);
	return (0);
}
