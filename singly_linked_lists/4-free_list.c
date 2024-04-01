#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to first node in list
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	/**
	 * free(current);
	 * */
}

