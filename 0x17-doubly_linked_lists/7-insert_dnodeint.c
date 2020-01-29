#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - return a node of double linked list
 * @h: head of the double list to print
 * @idx: number
 * @n: value of node
 * Return: the length of nodes
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux;
	dlistint_t *new;
	unsigned int i = 0;

	if (index == 0)
	{
		new = add_dnodeint(&h, n);
		return (new);
	}
	aux = h;
	while (aux && i < (idx - 1))
	{
		aux = aux->next;
		i++;
	}
	if (i == (idx - 1))
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
