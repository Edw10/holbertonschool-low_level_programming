#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return a node of double linked list
 * @head: head of the double list to print
 * @index: number
 * Return: the length of nodes
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux;
	dlistint_t *new;
	unsigned int i = 0;

	if (index == 0)
		new = add_dnodeint(&head, n)
	aux = head;
	while (aux && i < (idx-1))
	{
		aux = aux->next;
		i++;
	}
	if (i == (idx-1))
	{
		if (aux->next)
		{
			aux->next->prev = new;
			new->next = aux->next;
			aux->next = new;
			new->prev = aux;
			return (new);
		}
		aux->next = new;
		new->next = NULL;
		new->prev = aux;
		return (new);
	}
	return (NULL);
}
