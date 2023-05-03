#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int re = 0;
	int u;

	while (*s != '\0')
	{
		re++;
		s++;
	}
	s--;
	for (u = re; u > 0; u--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
