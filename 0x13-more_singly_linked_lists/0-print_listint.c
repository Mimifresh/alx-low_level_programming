#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elements of a listint_t list.
* @h: linked list.
*Return: number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *nod  = h;
	size_t num = 0;

	while (nod != NULL)
	{
		printf("%d\n", nod->n);
		num += 1;
		nod = nod->next;
	}
	return (num);
}
