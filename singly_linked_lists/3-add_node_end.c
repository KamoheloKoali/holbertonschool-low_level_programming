#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * @head: pointer to pointer that's pointing to first node
 * @str: string that's in new node
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *new, *temp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	for (length = 0; str[length]; length++)
		;
	new->len = length;
	new->next = NULL;
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = temp;
	}
	return (new);
}

