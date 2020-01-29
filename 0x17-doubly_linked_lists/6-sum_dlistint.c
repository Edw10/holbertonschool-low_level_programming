#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum all the list values
 * @head: head of the list
 * Return: return the sum of all nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux;

	if (head)
	{
		aux = head;
		while (aux)
		{
			sum = sum + aux->n;
			aux = aux->next;
		}
	}
	return (sum);
}
