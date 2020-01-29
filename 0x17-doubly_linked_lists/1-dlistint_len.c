#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - return the lenght of a double linked list
 * @h: head of the double list to print
 * Return: the length of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cn = 0;

	while (h)
	{
		h = h->next;
		cn++;
	}

	return (cn);
}
