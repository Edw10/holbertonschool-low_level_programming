#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	print_number(0);
	_putchar('\n');
	print_number(3);
	_putchar('\n');

	print_number(-99);

	_putchar('\n');


	print_number(1024);

	_putchar('\n');


	print_number(-4096);

	_putchar('\n');

	print_number(10);

	_putchar('\n');

	print_number(123456789);

	_putchar('\n');

	print_number(-2147483647);
	_putchar('\n');

	for(i = -100; i <= 100; i = i + 5)
	{
		print_number(i);
		_putchar('\n');
	}
	return (0);
}
