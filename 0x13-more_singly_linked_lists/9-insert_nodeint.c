#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - free a linked list
 * @head: pointer to the list
 * @idx: index
 * @n: number to save
 * Return: value of the head
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *tmp;
	unsigned int a = 0;

	h = *head;
	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);
	while (h && a < (idx - 1))
	{
		h = h->next;
		a++;
	}
	if (a == (idx - 1))
	{
		tmp->n = n;
		tmp->next = h->next;
		h->next = tmp;
		return (tmp);
	}
	return (NULL);
}
