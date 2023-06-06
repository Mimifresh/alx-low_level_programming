#include <stddef.h>
#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t
* @head: points to the first member on the list.
* Return: sum of all data.
*/
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
