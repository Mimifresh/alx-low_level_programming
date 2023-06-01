#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - adds a new node at the end of list_t.
* @head: points to the first node on the list.
* @str: string.
* Return: address to the new element.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	size_t lent = 0;
	list_t *node1, *end_no_de;

	if (str == NULL)
	{
		return (NULL);
	}

	node1 = malloc(sizeof(list_t));
	if (node1 == NULL)
	{
		return (NULL);
	}
	node1->str = strdup(str);

	while (str[lent])
		lent++;

	node1->len = lent;
	node1->next = NULL;
	end_no_de = *head;

	if (end_no_de == NULL)
	{
		*head = node1;
	}
	else
	{
		while (end_no_de->next != NULL)
			end_no_de = end_no_de->next;
		end_no_de->next = node1;
	}
	return (node1);
}
