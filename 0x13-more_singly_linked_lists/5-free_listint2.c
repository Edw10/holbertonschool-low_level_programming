#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *h;

	h = *head;

	while (h)
	{
		h = h->next;
		free(*head);
		*head = h;
	}
	*head = NULL;
}
