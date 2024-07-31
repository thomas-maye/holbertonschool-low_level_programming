#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node
 * at the end of a list
 * @head: the pointer of the head of the list
 * @n : an integer
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node  == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n  = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;
	new_node->prev = last_node;
	return (new_node);
}
