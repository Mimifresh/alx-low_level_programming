#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - frees a listint_t list.
* @head: points to the first item on the list.
* Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tm;

	if (head == NULL)
	return;

	while (*head)
	{
		tm = *head;
		*head = (*head)->next;
		free(tm);
	}
head = NULL;
}
