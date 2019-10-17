#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concat two strings
 * @s1: string to copy
 * @s2: string to concat
 * Return: a pointer to the string
 */

char *str_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i = 0, j = 0, h = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

		while (s1[i])
		{
			i++;
		}
		while (s2[j])
		{
			j++;
		}

		p = malloc(sizeof(char) * (i + j + 1));

		if (p)
		{

			while (h < i && h < n)
			{
				p[h] = s1[h];
				h++;
			}
			h = 0;
			while (h <= j && (i + h) < n)
			{
				p[i + h] = s2[h];
				h++;
			}
			p[i + h] = '\0';
		}
		else
		{
			return ('\0');
		}
		return (p);

}
