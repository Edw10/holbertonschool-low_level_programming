#include <stdio.h>

/**
 * main - find the largest prime number
 *
 * Return: always 0;
 */

int main(void)
{
	long i;
	long j = 612852475143;

	for (i = 2; i < j; i++)
	{
		if (j % i == 0)
		{
			j = j / i;
			i = 1;
		}
	}
	printf("%ld\n", j);


	return (0);
}
