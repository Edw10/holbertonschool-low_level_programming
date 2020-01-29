#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
