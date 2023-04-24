#include <stdio.h>

/**
 * main -  prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int com;

	for (com = 48; com < 58; com++)
	{
		putchar(com);
	}
	if (com != 57)
	{
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
