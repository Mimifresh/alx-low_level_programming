#include <stdio.h>

/**
 * main - print all letter except q and e
 *
 * Return: 0
 */
int main(void)
{
	char fu;

	for (fu = 'a'; fu <= 'z'; fu++)
	{
		if (fu != 'q' && fu != 'e')
			putchar(fu);
	}

	putchar('\n');
	return (0);
}
