#include <stdlib.h>

/**
 * create_array - create an array of size and initialice with c character
 * @size: size of array
 * @c: character to initialice
 * Return: a pointer to array
 */

int **alloc_grid(int width, int height)
{
	if (width > 0 && height > 0)
	{
		int **p = malloc(sizeof(int) * height);
		int i, j;

		if (p == '\0')
			return ('\0');

		for (i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(int) * width);
			for (j = 0; j < width; j++)
			{
				p[i][j] = 0;
			}
		}
		return (p);
	}
	return ('\0');
}
