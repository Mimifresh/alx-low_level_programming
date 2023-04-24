#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print alphabet in low case followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
