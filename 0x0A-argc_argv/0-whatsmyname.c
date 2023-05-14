#include <stdio.h>

/**
* main - prints name of a program.
* @argc: argument count
* @argv: argument vector
* Return: 0
*/
int main(int argc__attribute__((unused)), char **argv[])
{
	printf("%s\n", **argv[0]);
	return (0);
}
