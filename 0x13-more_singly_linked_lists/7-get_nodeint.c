#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t.
* @head: points to first member on the list.
* @index: index of node.
* Return: node or NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t nod;

	for (nod = 0; (nod < index) && (head->next); nod++)
	{
		head = head->next;
	}

	if (nod < index)
	{
		return (NULL);
	}
return (head);
}
