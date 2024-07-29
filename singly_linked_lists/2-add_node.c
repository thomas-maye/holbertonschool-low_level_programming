#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - A function that adds a new node
 * at the begginning of a list_t list
 * @head: the double pointer to the head of the list
 * @str: the string
 * Return: the address of the element or NULL if
 * it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	/*calcul la longueur de la str*/
	for (len = 0; str[len] != '\0'; len++)

	/*allocation de mÃmoire d'un noeud*/
	/*affecte aussi l'adresse de la mÃmoire allouÃe */
	new_node = malloc(sizeof(list_t));

	/*vÃrification si la mÃ©moire est biern allouÃe*/
	if (new_node == NULL)
	{
		return (NULL);
	}

	/*initialisation du new_node*/
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	/*met a jour le pointer du head list vers le new_node*/
	(*head) = new_node;

	return (*head);
}
