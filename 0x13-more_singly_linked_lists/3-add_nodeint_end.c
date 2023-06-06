#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: points to the first item on the list.
* @n: integer.
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnod;
	listint_t *num = *head;

	newnod = malloc(sizeof(listint_t));
	if (newnod != NULL)
	{
		newnod->n = n;
		newnod->next = NULL;
	}
	else
		return (NULL);
	if (num != NULL)
	{
		while (num->next != NULL)
			num = num->next;
		num->next = newnod;
	}
	else
		*head = newnod;
	return (*head);
}
