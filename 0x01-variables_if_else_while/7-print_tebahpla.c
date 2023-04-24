#include <stdio.h>

/**
 * main - lower case alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int ls;

	for (ls = 'z'; ls <= 'a'; ls--)
	{
		putchar(ls);
	}

	putchar('\n');

	return (0);
}
