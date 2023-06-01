#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - adds a new node at the beginning of list_t.
* @head: points to the first node on the list.
* @str: string.
* Return: address to the new element.
*/
list_t *add_node(list_t **head, const char *str)
{
	size_t lent;
	list_t *node1;

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

	for (lent = 0; str[lent]; lent++)
	;

	node1->len = lent;
	node1->next = *head;
	*head = node1;
	return (node1);
}
