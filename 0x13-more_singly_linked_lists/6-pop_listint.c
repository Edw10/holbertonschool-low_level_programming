#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - free a linked list
 * @head: pointer to the list
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int a;

	if (!head)
		return (0);
	h = *head;
	a = (*head)->n;
	*head = (*head)->next;
	free(h);
	return (a);
}
