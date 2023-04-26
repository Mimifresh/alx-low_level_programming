#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int m;
	char t;

	m = 0;

	while (m++  < 10)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}

		_putchar('\n');
	}
}
