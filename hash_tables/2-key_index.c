#include "hash_tables.h"

/**
 * key_index - function
 * @key: key
 * @size: size
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int hash_value;
	int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;
		return (index);
}
