#include <stddef.h>
#include "lists.h"

/**
* listint_len - returns the number of elements in listint_t.
* @h: node
*Return: number of elements.
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *nod = h;
	size_t num = 0;

	while (nod != NULL)
	{
		num += 1;
		nod = nod->next;
	}
	return (num);
}
