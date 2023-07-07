#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key:  pointer to the array
 * @size:  size of the array of the hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
