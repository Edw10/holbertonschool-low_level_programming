#include "holberton.h"

/**
 * _strlem_recursion - prints a string in reverse
 * @s: string to print
 *
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
