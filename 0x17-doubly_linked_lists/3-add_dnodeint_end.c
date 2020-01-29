#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - return the lenght of a double linked list
 * @head: head of the double list to print
 * @n: number
 * Return: the length of nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head)
	{
		aux = *head;
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = new;
		new->prev = aux;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	new->next = NULL;
	return (new);
}
