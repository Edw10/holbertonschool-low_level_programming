#include "holberton.h"

/**
 * puts_recursion - prints a string using recursion
 * @s: string to print
 *
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
