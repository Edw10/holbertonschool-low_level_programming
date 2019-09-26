#include <stdio.h>

/**
 * main - find the largest prime number
 *
 * Return: always 0;
 */

int main(void)
{
	long i;
	long j;

	for (i = 612852475142; i >= 2; i--)
	{
		for (j = 2 ; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j >= i)
		{
			printf("%ld\n", i);
			break;
		}
	}
	return (0);
}
