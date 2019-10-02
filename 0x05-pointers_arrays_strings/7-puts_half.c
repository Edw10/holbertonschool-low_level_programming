#include "holberton.h"

/**
 * puts_half - print a string in screen
 * @str: string to print
 *
 */

void puts_half(char *str)
{
	int c = 0, i = 0;

	while (*(str + c) != '\0')
	{
		c++;
	}
	c = c + 1;
	for (i = c / 2; i < (c - 1); i++)
		_putchar(*(str + i));
	_putchar('\n');
}
