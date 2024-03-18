#include "hash_tables.h"

/**
 * key_index- here is a description
 *
 * @key: here is a parameter
 * @size: here is another parameter
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
