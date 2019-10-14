#include "holberton.h"

/**
 * _isupper - determine if a character is uppercase
 * @c: character to test
 * Return: 1 if c is uppercase, 0 if dont
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
