#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - print a linked list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		a++;
	}

	return (a);
}
