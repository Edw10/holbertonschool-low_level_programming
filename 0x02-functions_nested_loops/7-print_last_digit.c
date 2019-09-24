#include "holberton.h"

/**
 * print_last_digit - print the las digit of a number
 * @n: the number to test
 * _putchar write on screen
 * Return: the absolute valor of a number
 */

int print_last_digit(int n)
{

	if ( n <= 0)
	{
		_putchar(((n * -1) % 10) + 48);
		return (((n * -1) % 10));
	}
	_putchar((n % 10) + 48);
	return (n % 10);

}
