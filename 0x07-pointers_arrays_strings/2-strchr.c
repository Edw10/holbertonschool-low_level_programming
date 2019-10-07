#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search
 * Return: the adders of the first character
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (c == '\0')
		return (s);
	else
		return ('\0');
}
