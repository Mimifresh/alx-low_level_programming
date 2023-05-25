#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - prints numbers, followed by a new line.
* @n: the number of integers passed to the function
* @separator: the string to be printed between numbers
* Return:
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	unsigned int m;

	if (separator == NULL)
	{
		return;
	}
	va_start(numbers, n);
	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(numbers, const unsigned int));

		if (m != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
