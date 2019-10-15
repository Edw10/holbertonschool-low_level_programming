#include "holberton.h"

/**
 * _isalpha - determine if the character is a letter
 * @c: the character to test
 *_putchar write on screen
 * Return: 1 if letter 0 if dont
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);

}
