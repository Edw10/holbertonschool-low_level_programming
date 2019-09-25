#include "holberton.h"

/**
 * times_table - prints every minute
 *@n: number of the table
 * _putchar write on screen
 * Return: void
 */

void times_table(int n)
{
	int j;
	int h;

	for (j = 0; j <= 9; j++)
	{
		_putchar('0');
		for (h = 1; h <= 9; h++)
		{
			_putchar(',');
			_putchar(' ');

			if ((h * j) >= 10)
			{
				_putchar(((h * j) % 100) / 10 + '0');
				_putchar((h * j) % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((h * j) + '0');
			}
		}
		_putchar('\n');
	}
}
