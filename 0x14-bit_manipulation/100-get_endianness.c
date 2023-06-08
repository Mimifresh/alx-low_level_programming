#include "main.h"

/**
* get_endianness - checks the endianness.
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int w = 1;
	char *h;

	h  = (char *)&w;
	return (*h);
}
