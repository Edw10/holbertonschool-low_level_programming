#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - divide a phrase by words
 * @str: string to divide
 * Return: a pointer to a matriz of words
 */

char **strtow(char *str)
{
	int i = 0, j = 0, a, h, c = 0;
	char **p;

	if (str == '\0')
		return (NULL);

	while (str[i])
	{
		if (str[i] == ' ')
			c++;
		i++;
	}

	p = malloc(sizeof(char*) * (c + 2));
	if (p)
	{
		i = 0;
		while (str[i])
		{
			if(str[i] == ' ')
			{
				p[j] = malloc(sizeof(char) * (i - a));
				if (p)
				{
					h = 0;
					for (a++; a <= i; a++)
					{
						p[j][h] = str[a];
						h++;
					}
					p[j][h] = '\0';
					j++;
				}
				else
				{
					return (NULL);
				}

			}
		}
		return (p);
	}
	else
	{
		return (NULL);
	}
}
