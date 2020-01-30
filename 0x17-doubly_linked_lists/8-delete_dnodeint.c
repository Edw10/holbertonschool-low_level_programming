#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - return a node of double linked list
 * @head: head of the double list to print
 * @index: number
 * Return: the length of nodes
 */

int *delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i = 0;

	aux = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux);
		return 1;
	}
	while (aux && i < index)
	{
		aux = aux->next;
		i++;
	}
	if (i == index)
	{
		if (aux->next)
		{
			aux->next->prev = aux->prev;
			aux->prev->next = aux->next;
			free(aux);
			return 1;
		}
		aux->prev->next = NULL;
		free(aux);
		return 1;
	}
	return -1;
}
