#include <stdio.h>
#include "holberton.h"

/**
 * main - print the sum of the mutiples below 1024
 *
 * Return: 0
 */

int main(void)
{
	int n = 1;
	int sum;

	while ((5 * n) < 1024)
	{
		if ((n * 5) % 3 != 0)
			sum = sum + (5 * n);
		n++;
	}
	n = 1;
	while ((3 * n) < 1024)
	{
		sum = sum + (3 * n);
		n++;
	}
	printf("%d\n", sum);

	return (0);
}
