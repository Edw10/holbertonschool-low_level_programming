#include <stdio.h>

/**
 * main - find the largest prime number
 *
 * Return: always 0;
 */

int main(void)
{
	long i;
	long j = 2;
	int a;

	for (i = 612852475142; i >= 2; i--)
	{
		if (612852475143 % i == 0)
		{
			/* printf("%ld \n", i);*/
			a = 0;
			for (j = 2 ; j < i; j++)
			{
				/* printf("%ld %ld \n", j, i); */

				if (i % j == 0)
				{
					/* printf("%ld %ld \n", j, i); */
					a = 1;
					break;
				}
			}

			if (a == 0)
			{
				printf("%ld\n", i);
				break;
			}
		}
	}
	return (0);
}
