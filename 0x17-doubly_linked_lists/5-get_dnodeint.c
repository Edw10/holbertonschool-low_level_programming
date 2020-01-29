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

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i = 0;

	aux = head;
	while (aux && i < index)
	{
		aux = aux->next;
		i++;
	}
	if (i == index)
		return (aux);
	return NULL;
}
