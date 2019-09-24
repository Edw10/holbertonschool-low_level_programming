#include "holberton.h"

/**
 * print_sign - print the sign of a number
 * @n: the number to test
 *_putchar write on screen
 * Return: 1 if greater than 0, 0 if equals to zero and -1 if less than zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_print('-');
		return (-1);
	}
	else if (n > 0)
	{
		_print('+')
		return (1);
	}
	_print('0')
	return (0);

}
