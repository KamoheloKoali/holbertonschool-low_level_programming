#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints the elements of a list
 * @h: pointer to linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 1;
	list_t *ptr;

	if (h == NULL)
		return (1);
	ptr = *h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
