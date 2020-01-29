#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - return the lenght of a double linked list
 * @head: head of the double list to print
 * @n: number
 * Return: the length of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head)
	{
		(*head)->prev = new;
	}
	new->next = (*head);
	new->prev = NULL;
	head = &new;
	return (new);
}
