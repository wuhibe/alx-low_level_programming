#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* *main - Starts here
*  *Return: Always 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int y;
y = n % 10;
int x;
x = abs(y);
if (x > 5)
{
printf("Last digit of %d is ", n);
printf("%d and is greater than 5\n", x);
}
else
{
if (x == 0)
{
printf("Last digit of %d is ", n);
printf("%d and is 0\n", x);
}
else
{
printf("Last digit of %d is ", n);
printf("%d and is less than 6 and not 0\n", x);
}
}
return (0);
}
