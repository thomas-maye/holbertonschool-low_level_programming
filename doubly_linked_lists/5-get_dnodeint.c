#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns
 * the nth node of a linked list
 * @head: the pointer to the head of the list
 * @index: the index of the node
 * Return: the nth node of the linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nth_node = 0;

	while (head != NULL)
	{
		if (nth_node == index)
		{
			return (head);
		}
		nth_node++;
		head = head->next;
	}
	return (NULL);
}
