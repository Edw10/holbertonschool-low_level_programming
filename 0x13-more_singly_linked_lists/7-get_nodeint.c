#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - free a linked list
 * @head: pointer to the list
 * @index: index
 * Return: value of the head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int a = 0;

	if (!(*head))
		return (NULL);
	h = *head;
	while (h && a < index)
	{
		h = h->next;
		a++;
	}
	if (a == index)
		return (h);
	return (NULL);
}
