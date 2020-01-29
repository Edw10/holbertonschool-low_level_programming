#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print all the elements of a double linked list
 * @h: head of the double list to print
 * Return - the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cn = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cn++;
	}
	return (cn);
}
