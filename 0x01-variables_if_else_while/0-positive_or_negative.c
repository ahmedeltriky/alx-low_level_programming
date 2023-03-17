#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Entry
* Return: value 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
{
	printf(n, "is positive"\n);
}
	else if (n<0)
{
	printf(n, "is negative"\n);
}
	else
{
	print(n, "is zero");
}
	return (0);
}
