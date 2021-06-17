#include<stdio.h>
/**
* *main - Start here
*  *Return: Successful run
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
puts("Size of a char: %d byte(s)", sizeof(a));
puts("Size of an int: %d byte(s)", sizeof(b));
puts("Size of a long int: %d byte(s)", sizeof(c));
puts("Size of a long long int: %d byte(s)", sizeof(d));
puts("Size of a float: %d byte(s)", sizeof(e));
return (0);
}
