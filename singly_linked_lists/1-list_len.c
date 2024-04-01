#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - counts number of nodes
 * @h: pointer to first node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int count;
	const list_t *ptr = NULL;

	ptr = h;
	for (count = 0; ptr != NULL; count++)
		ptr = ptr->next;
	return (count);
}

