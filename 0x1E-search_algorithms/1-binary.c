#include <stdio.h>
#include "search_algos.h"

void printa(int *array, size_t i, size_t size);

/**
 * binary_search - binary search
 * @array: array
 * @size: size of array
 * @value: element to search
 * Return: the position of the element
 */
int binary_search(int *array, size_t size, int value)
{
	size_t bot = 0, top = size - 1, mid = 0;

	if (array == NULL || value == 0)
		return (-1);

	printa(array, bot, size);
	while (bot < top)
	{
		mid = (bot + top) / 2;
		if (array[mid] < value)
		{
			bot = mid + 1;
			printa(array, bot, top + 1);
		}
		else if (array[mid] > value)
		{
			top = mid - 1;
			printa(array, bot, top + 1);
		}
		else
			return (mid);
	}
	if (array[bot] == value)
		return (bot);
	return (-1);
}

/**
 * printa - prints array
 * @array: array
 * @i: initial point
 * @size: size
 */
void printa(int *array, size_t i, size_t size)
{
	printf("Searching in array: ");
	while (i < size)
	{
		if (i + 1 == size)
			printf("%d ", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
	printf("\n");
}
