#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new node
 * at the end of a list_t list
 * @head: the double pointer to the head of the list
 * @str: the string
 * Return: the address of the element or NULL if
 * it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *prev_node;
	unsigned int length;

	for (length = 0; str[length] != '\0'; length++)

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		prev_node = *head;

		while (prev_node->next != NULL)
		{
			prev_node = prev_node->next;
		}
		prev_node->next = new_node;
	}
	return (*head);
}
