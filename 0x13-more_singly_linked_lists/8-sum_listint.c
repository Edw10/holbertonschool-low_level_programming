#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - print a linked list
 * @head: pointer to the list
 * Return: number of nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
