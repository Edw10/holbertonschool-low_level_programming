#include "holberton.h"

/**
 * print_rev - print a string backwards
 * @str: string to print
 */

void print_rev(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		c++;
		str++;
	}
	str--;
	while (c != 0)
	{
		_putchar(*str);
		c--;
		str--;
	}
	_putchar('\n');
}
