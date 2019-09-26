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
		for (j = (i - 1); j >= 2; j--)
		{
			if (i % j == 0)
			{
				break;
			}
			else if ((i % j != 0) && j == 2)
			{
				j = 1;
			}
		}
		if (j <= 2)
		{
			printf("%ld\n", i);
			break;
		}
	}
	return (0);
}
