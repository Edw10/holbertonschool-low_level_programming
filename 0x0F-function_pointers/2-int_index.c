#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - calls the correspond function
 * @array: array with the values
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: te index of the element of -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp && array)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
