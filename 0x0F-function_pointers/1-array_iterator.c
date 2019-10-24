#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - calls the correspond function
 * @array: array with the values
 * @size: size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
