#include "holberton.h"

/**
 * print_number - print a number
 * @n: number to print
 *
 * Return: void
 */

void print_number(int n)
{
	int j = 1;
	int d = 10;
	int i;

	if (n < 0)
	{
		_putchar('0' - 3);
		n = n * -1;
	}
	while (n / (j * 10) > 0)
	{
		j = j * 10;
	}
	for (i = j; i > 0; i = i / 10)
	{
		d = n / i;
		n = n - (d * i);
		_putchar('0' + d);
	}
	_putchar('\n');
}
