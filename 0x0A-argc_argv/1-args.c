#include <stdio.h>
#include "main.h"

/**
* main - prints the number of arguments passed into it.
* @argv: argument vector
* @argc: argument count
* Return: 0
*/
int main(int argc, char *argv)
{
(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}
