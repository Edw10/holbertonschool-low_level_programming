#include "holberton.h"

/**
 * puts2 - print a string in screen
 * @str: string to print
 *
 */

void puts2(char *str)
{
	while (*str != '\0' || *(str + 1) != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
