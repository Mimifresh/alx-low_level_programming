#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * discription: 'check positive and negative numbers'
 * Return: 0 
 */
int main(void)
{
	int m;

	srand(time(0));
	m = rand() - RAND_MAX / 2;
	if (m > 0)
{

	printf("%d is positive\n", m);
}
else if (m == 0)
{
	printf("%d is zero\n", m);
}
else
{
	printf("%d is negative\n", m);
}
	return (0);
}
