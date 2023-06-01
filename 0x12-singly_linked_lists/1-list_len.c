#include <stddef.h>
#include "lists.h"

/**
* list_len - returns the number of elements in list_t list.
* @h: points to the const List_t.
* Return: number of elements(num_element).
*/
size_t list_len(const list_t *h)
{
	size_t num_element;

	for (num_element = 0; h != NULL; num_element++)
	{
		h = h->next;
	}
return (num_element);
}
