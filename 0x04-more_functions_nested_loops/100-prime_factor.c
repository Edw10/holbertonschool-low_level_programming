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

	for (i = 1231951; i >= 2; i--)
	{
		if (1231952 % i == 0)
		{
			/* printf("%ld \n", i);*/
			for (j = 2 ; j < i; j++)
			{
				/* printf("%ld %ld \n", j, i); */

				if (i % j == 0)
				{
					/* printf("%ld %ld \n", j, i); */
					break;
				}
			}

			if (j >= i)
			{
				printf("%ld\n", i);
				break;
			}
		}
	}
	return (0);
}
