#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints every minute
 * _putchar write on screen
 * Return: void
 */

void print_to_98(int n)
{
	int j;

	printf("%d", n);

	if (n <= 98)
	{
		for (j = n + 1; j <= 98; j++)
		{
			printf(", %d", j);
		}
	}
	else
	{
		for (j = n - 1; j >= 98; j--)
		{
			printf(", %d", j);
		}
	}
	printf("\n");
}
