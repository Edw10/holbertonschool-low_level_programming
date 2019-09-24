#include "holberton.h"

/**
 * jack_bauer - prints every minute
 * _putchar write on screen
 * Return: void
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int h = 0;
	int f = 9;

	for (j = 0; j <= 2; j++)
	{
		if (j == 2)
			f = 3;
		i = 0;
		while (i <= f)
		{
			for (h = 0; h <= 5; h++)
			{
				for (k = 0; k <= 9; k++)
				{
					_putchar('0' + j);
					_putchar('0' + i);
					_putchar(':');
					_putchar('0' + h);
					_putchar('0' + k);
					_putchar('\n');
				}
			}
			i = i + 1;
		}
	}
	return;

}
