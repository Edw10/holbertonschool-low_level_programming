#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint_safe - print a linked list
 * @head: pointer to the list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t a = 0;

	if (!h)
		exit(98);

	while (h)
	{
		printf("[%p] %d\n", h, h->n);
		h = h->next;
		a++;
	}

	return (a);
}
