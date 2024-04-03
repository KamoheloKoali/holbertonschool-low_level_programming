#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - get node in list
 * @head: pointer to first node in list
 * @index: which node to get
 * Return: pointer to selected  node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		current = current->next;
		count++;
		if (index == count)
			return (current);
	}
	return (NULL);
}

