#include "holberton.h"

/**
 * print_number - print a number
 * @n: number to print
 *
 * Return: void
 */

void print_number(int n)
{
	if (n / 10 > 10 || n / 10 < -10)
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		if (n < 0)
			_putchar('-');
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);

	}

}
