#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts
 * a new node at a given position
 * @h: the double pointer to the head of the list
 * @idx: the index of the list
 * @n: a number
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i;

	temp = *h;

	if (h == NULL)
		return (NULL);

	/*si idx = 0,on doit inserer au debut donc on appelle la fonction deja cree*/
	if (idx == 0)
		return (add_dnodeint(h, n));
	/*on parcourt la liste jusqu'a idx - 1 pour inserer*/
	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;
	/*on reverifie entre temps si temp n'est pas null*/
	if (temp == NULL)
		return (NULL);
	/*on est en fin de liste donc on appelle la fonction associe deja cree*/
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	/*on alloue de la memoire et on verifie si ca fonctionne*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/*insertion du nouveau noeud a l'emplacement specifie*/
	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	/* on fait poiter vers le nouveau noeud*/
	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}
