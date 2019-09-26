#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	print_number(2147483647);
	_putchar('\n');
	print_number('a');
	_putchar('\n');
	for(i = -4000; i <= 4100; i = i + 300)
	{
		print_number(i);
		_putchar('\n');
	}
	return (0);
}
