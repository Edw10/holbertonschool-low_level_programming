#include "holberton.h"

/**
 * _strcmp - copies n bytes of a string
 * @s1: string of destiny
 * @s2: string to copy
 * Return: the addres of the string copied
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0;
	int i = 0, j = 0;

	while (*(s1 + c) != '\0')
	{
		i = i + *(s1 + c);
		c++;
	}

	c = 0;

	while (*(s2 + c) != '\0')
	{
		j = j + *(s2 + c);
		c++;
	}

	return (i - j);
}
