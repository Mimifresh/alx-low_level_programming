#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int dee = 0;
	int k = 0;
	char *e = str;
	int h;

	while (*e != '\0')
	{
		e++;
		dee++;
	}
	k = dee - 1;
	for (h = 0 ; h <= k ; h++)
	{
		if (h % 2 == 0)
	{
		_putchar(str[h]);
	}
	}
	_putchar('\n');
}
