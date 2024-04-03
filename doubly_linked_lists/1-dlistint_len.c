#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - calculates the number of nodes in a linked list
 * @h: pointer to the first node in the list
 * Return: number of nodes in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	else if (h->prev == NULL && h->next == NULL)
		return (count + 1);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

