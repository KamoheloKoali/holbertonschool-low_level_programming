#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - free dlistint_int list
 * @head: pointer to first node in list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (head == NULL)
		return;
	while (current != NULL)
	{
		current = current->next;
		free(head);
		head = current;
	}
}

