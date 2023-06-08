#include "main.h"

/**
* flip_bits -  returns the number of bits you would need to flip
* @n: first number to be fliped
* @m: second number to be fliped
* Return: number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, sum = 0;
	unsigned long int cu, ve = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		cu = ve >> k;
		if (cu & 1)
			sum++;
	}

	return (sum);
}
