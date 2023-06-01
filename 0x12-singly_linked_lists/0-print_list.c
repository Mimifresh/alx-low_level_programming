#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements in list_t.
* @h: pointer to const list_t.
* Return: number of elements printed.
*/
size_t print_list(const list_t *h)
{
	size_t element;

	for (element = 0; h != NULL; element++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
return (element);
}
