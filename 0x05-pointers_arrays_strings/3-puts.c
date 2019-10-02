#include "holberton.h"

/**
 *
 * _puts - print a string in screen
 * @str: string to print
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
