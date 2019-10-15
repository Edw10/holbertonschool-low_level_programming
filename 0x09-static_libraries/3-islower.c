#include "holberton.h"

/**
 * _islower - determine if lowercase or uppercase
 * @c: the character to test
 *_putchar write on screen
 * Return: 1 if lower 0 if dont
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);

}
