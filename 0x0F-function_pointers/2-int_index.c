#include "function_pointers.h"

/**
* int_index - searches for an integer
* @size: number  of elements in the array
* @cmp: pointer to the function that compares  arrays
* @array: array
* Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
return (-1);
}
