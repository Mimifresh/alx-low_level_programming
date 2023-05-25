#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n:  number of argument passed
* Return: total
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list add_them;

	unsigned int total = 0, i;

	if (n == 0)
	{
		return (0);
	}

	va_start(add_them, n);
	for (i = 0; i < n; i++)
	{
		total = total + va_arg(add_them, const unsigned int);
	}
	va_end(add_them);
	return (total);
}
