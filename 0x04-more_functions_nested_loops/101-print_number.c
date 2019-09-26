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
	int a=0;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n <= 10)
	{
		a = n % 10;
		_putchar('0' + a);

	}
	else
	{
		a = n % 10;
		n = n / 10;
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
		_putchar('0' + a);

	}

}
