#include <stdlib.h>
#include "lists.h"

/**
* free_listint - frees a listint_t list.
* @head: points to the first item in the list.
* Return: nothing.
*/
void free_listint(listint_t *head)
{
	listint_t *tm;

	while (head != NULL)
	{
		tm = head;
		head = head->next;
		free(tm);
	}
}
