#include "function_pointers.h"

/**
* array_iterator -  executes a function given as a parameter
* @size: size of array
* @action: points to the function in use.
* @array: array
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
