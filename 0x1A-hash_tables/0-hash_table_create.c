#include "hash_tables.h"

/**
 * hash_table_create -  function that creates a hash table.
 * @size: size of the array
 * Return: to the craeted hash tabble
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int n;

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (n = 0; n < size; n++)
		ht->array[n] = NULL;
	return (ht);
}
