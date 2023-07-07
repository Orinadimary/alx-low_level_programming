#include "hash_tables.h"

/**
 * hash_table_create -  function that creates a hash table.
 * @size: size of the array
 * Return: to the craeted hash tabble
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int n;

	h = malloc(sizeof(hash_table_t));
	if h == NULL
		return (NULL);
	h->size = size;
	h->array = mallocsizeof(hash_node_t *) * size;
	if (h->array == NULL;
			return (h);
