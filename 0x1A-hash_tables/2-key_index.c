#include "hash_tanles.h"
/**
 * key_index - calculate the index for the key and value
 * @key: the key
 * @size: size of the array
 * Return: the index where the key and value should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
