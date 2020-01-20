#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Create a hash table
 * @size: the size of the array
 * Return: a pointer to the new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	(*ht).size = size;
	(*ht).array = 0;
	(*ht).array = realloc((*ht).array, 8 * size);
	if ((*ht).array)
		return (ht);
	return (NULL);
}
