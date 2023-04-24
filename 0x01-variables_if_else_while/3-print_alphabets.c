#include <stdio.h>

/**
 * main - print alphabet in lower and upper case followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char choco;

	for (choco = 'a'; choco <= 'z'; choco++)
	{
		putchar(choco);
	}
	for (choco = 'A'; choco <= 'Z'; choco++)
	{
		putchar(choco);
	}
	putchar('\n');
	return (0);
}
