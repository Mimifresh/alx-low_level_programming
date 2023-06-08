#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: points to a string.
* Return: converted int or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int n = 0;

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
		return (0);
	}

	k = 0;
	while (b[k] != '\0')
	{
		n <<= 1;
		if (b[k] == '1')
		n +=  1;
		k++;
	}
return (n);
}
