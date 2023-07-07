#include "hash_tables.h"

/**
 * hash_table_t - function that adds an element to hash table
 * @ht: table to be added
 * @key: pointer to the string
 * @value: pointer from the key string
 *
 * Return: 1 on success , otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *new;
	char *key;
	unsighned long int index, n;


