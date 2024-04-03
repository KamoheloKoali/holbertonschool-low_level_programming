#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - add a new node at spicified position in the list
 * @head: pointer to first node in list
 * @n: data to be stored in new node
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new, *prev;
	unsigned int count = 0;

	if  (*h == NULL)
		add_dnodeint_end(h, n);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (current != NULL)
	{
		if (count == idx)
		{
			new->next = current;
			prev = current->prev;
			current->prev = new;
			prev->next = new;
			new->prev = prev;
		}
		current = current->next;
		count++;
	}
	return (new);
}

