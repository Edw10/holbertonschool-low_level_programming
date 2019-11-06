#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_listint - print a linked list
 * @head: pointer to the list
 * Return: number of nodes
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h, *tmp;

	if (!(*head))
		return (NULL);
	h = *head;
	while (h)
	{
		tmp = h->next;
		if (h == *head)
			h->next = NULL;
		else
			h->next = *head;
		*head = h;
		h = tmp;
	}

	return (*head);
}
