#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - print a linked list
 * @h - pointer to the list
 * Return - number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	if (!h)
		return (-1);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}

	return (a);
}
