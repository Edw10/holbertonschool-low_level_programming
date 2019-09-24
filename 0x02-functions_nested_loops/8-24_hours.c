#include "holberton.h"

/**
 * jack_bauer - prints every minute
 * _putchar write on screen
 * Return: void
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int h;

	for (j = 0; j <= 2; j++)
	{
		for (i = 0; i <= 4; i++)
		{
			for (h = 0; h <= 5; h++)
			{
				for (k = 0; k <= 9; k++)
				{
					_putchar(j);
					_putchar(i);
					_putchar(':');
					_putchar(h);
					_putchar(k)
				}
			}
		}
	}
	return;

}
