#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @head: points to the first member of the list.
* @n: integer.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnod;

	newnod = malloc(sizeof(listint_t));
	if (newnod != NULL)
	{
		newnod->n = n;
		newnod->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		newnod->next = *head;
	*head = newnod;
	return (newnod);
}
