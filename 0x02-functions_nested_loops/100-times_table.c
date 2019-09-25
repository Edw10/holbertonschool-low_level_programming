#include "holberton.h"

/**
 * print_times_table - prints every minute
 *@n: number of the table
 * _putchar write on screen
 * Return: void
 */

void print_times_table(int n)
{
	int j;
	int h;

	if (n >= 0 && n <= 14)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('0');
			for (h = 1; h <= n; h++)
			{
				_putchar(',');
				_putchar(' ');

				if ((h * j) >= 100)
				{
					_putchar((h * j) / 100 + '0');
					_putchar(((h * j) % 100) / 10 + '0');
					_putchar((h * j) % 10 + '0');
				}
				else if ((h * j) >= 10)
				{
					_putchar(' ');
					_putchar(((h * j) % 100) / 10 + '0');
					_putchar((h * j) % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((h * j) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
