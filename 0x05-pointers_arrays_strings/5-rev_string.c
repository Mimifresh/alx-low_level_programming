#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int r;

	while (s[counter] != '\0')
	counter++;
	for (r = 0; r < counter; r++)
	{
		counter--;
		rev = s[r];
		s[r] = s[counter];
		s[counter] = rev;
	}
}
