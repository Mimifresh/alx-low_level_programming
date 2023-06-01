#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a list_t list.
* @head: pointer to the first node.
* Return: noting.
*/
void free_list(list_t *head)
{
	list_t *end_no_de;

	while ((end_no_de = head) != NULL)
	{
		head = head->next;
		free(end_no_de->str);
		free(end_no_de);
	}
}
