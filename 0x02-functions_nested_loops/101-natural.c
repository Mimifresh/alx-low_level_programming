#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int h, num = 0;

	for (h = 0; h < 1024; h++)
	{
		if ((h % 3) == 0 || (h % 5) == 0)
			num += h;
	}

	printf("%d\n", num);

	return (0);
}
