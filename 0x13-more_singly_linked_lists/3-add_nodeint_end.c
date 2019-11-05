#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node in the end of a linked list
 * @head: pointer to the list
 * @n: number to save
 * Return: number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *i;

	node = malloc(sizeof(listint_t));
	i = *head;

	if (!node)
		return (NULL);

	while (i.next)
		i = i.next;

	node->n = n;
	i->next = node;
	node->next = NULL;

	return (node);
}
