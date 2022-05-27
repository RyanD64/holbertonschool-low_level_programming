#include "hash_tables.h"

/**
 * key_index - gives the key of an index
 * @key: key of the table
 * @size: size of the arrray
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int find_index;

	find_index = hash_djb2(key);
	return (find_index % size);
}
