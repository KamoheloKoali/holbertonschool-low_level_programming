#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node to a linked list
 * @head: pointer to a pointer that points to the first node
 * @str: pointer to string that's going to be stored in new node
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t **new, **current;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	current = head;
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = current;
	head = new;
	return (head);
}

