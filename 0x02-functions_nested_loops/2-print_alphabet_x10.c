#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char t;
	int m;

	m = 10;

	while (m < 10)
	{
		t = 'a';
		while (t <= 'z')
		{
			_putchar(t);
			t++;
		}
		_putchar('\n');
		m++;
	}
}
