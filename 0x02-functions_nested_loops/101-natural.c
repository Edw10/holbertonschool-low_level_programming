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

	while ((3 * n) < 1024 || (5 * n) < 1024)
	{
		if ((n * 5) % 3 == 0)
			sum = sum + (3 * n);
		else
			sum = sum + (3 * n) + (5 * n);
		n++;
	}
	printf("%d", sum);

	return (0);
}
