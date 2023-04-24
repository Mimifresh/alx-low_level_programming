#include <stdio.h>

/**
 * main - print all single digit of number in base  10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int nu;

	for (nu = '0'; nu < 10; nu++)
	{
		printf("%i", nu);
	}

	printf("\n");

	return (0);
}
