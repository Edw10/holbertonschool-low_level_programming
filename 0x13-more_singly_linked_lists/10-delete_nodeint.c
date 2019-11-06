#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - free a linked list
 * @head: pointer to the list
 * @index: index
 * Return: value of the head
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *tmp;
	unsigned int a = 0;

	h = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	while (h && a < (index - 1))
	{
		h = h->next;
		a++;
	}
	if (a == (index - 1))
	{
		tmp = h->next;
		h->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
