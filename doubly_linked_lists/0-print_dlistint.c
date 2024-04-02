#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - print the elements of dlistint_t list
 * @h: pointer to the first node in the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (1);
	else if (h->next == NULL && h->prev == NULL)
	{
		printf("%d\n", h->n);
		return (num + 1);
	}
	for (num = 0; h->next != NULL; num++)
	{
		printf ("%d\n", h->n);
		h = h->next;
	}
	if (h->prev != NULL)
		printf("%d\n", h->n);
	return (num + 1);
}

