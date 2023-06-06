#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t.
* @head: points to the first member of the list.
* Return: if empty return 0 else return the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *tm;
	int n;

	tm = *head;

	if (tm == NULL)
	return (0);

	*head = tm->next;
	n = tm->n;
	free(tm);
return (n);
}
