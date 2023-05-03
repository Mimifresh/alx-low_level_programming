#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int b, d, bee;

	bee = 0;

	for (b = 0; str[b] != '\0'; b++)
		bee++;

	d = (bee / 2);

	if ((bee % 2) == 1)
		d = ((bee + 1) / 2);

	for (b = d; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
