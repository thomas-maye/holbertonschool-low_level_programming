#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that deletes
 * the node at index
 * @head: the doublepointer to the head of the list
 * @index:  the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = *head;

	/* Verif si la liste est vide*/
	if (*head == NULL)
		return (-1);

	/*pour supprimer le head*/
	if (index == 0)
	{
		/*deplace le head*/
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/*Chercher le noeud de l'index donne*/
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	/*Si temp est null, on a trop de noeud*/
	if (temp == NULL)
		return (-1);

	/*Supprime le noeud de l'index*/
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
