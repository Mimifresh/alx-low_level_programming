#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int n, m, net, num;

	n = 1;
	m = 2;
	num = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (n < 4000000 && (n % 2) == 0)
		{
			num = num + n;
		}
		net = n + m;
		n = m;
		m = net;
	}

	printf("%lu\n", num);

	return (0);
}
