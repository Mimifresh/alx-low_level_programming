#include "function_pointers.h"

/**
* print_name - prints a name.
* @f: function pointers
* @name: points to array represtings name.
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if nam e== NULL || f == NULL
		return;

	f(name);
}
