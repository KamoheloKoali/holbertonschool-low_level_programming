#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - add all integers data in the list
 * @head: pointer to first node in list
 * Return: pointer to new node
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

