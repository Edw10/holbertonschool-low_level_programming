#include "holberton.h"

/**
 * puts2 - print a string in screen
 * @str: string to print
 *
 */

void puts2(char *str)
{
	int c = 0, i = 0;

	while (*(str + c) != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i = i + 2)
		_putchar(*(str + i));
	_putchar('\n');
}
