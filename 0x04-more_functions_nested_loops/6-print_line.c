#include "holberton.h"

/**
 * print_line - print a strengh line of n longitud
 * @n: longitud of line
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
