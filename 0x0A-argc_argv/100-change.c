#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of argument
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int nu, m, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nu = atoi(argv[1]);
	result = 0;
	if (nu < 0)
	{
		printf("0\n");
		return (0);
	}
	for (m = 0; m < 5 && nu >= 0; m++)
	{
		while (nu >= coins[m])
		{
			result++;
			nu -= coins[m];
		}
	}
	printf("%d\n", result);
	return (0);
}
