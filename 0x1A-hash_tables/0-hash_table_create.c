#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hash table
 * @size: size of hash table
 *
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int  i;

	new_hash = malloc(sizeof(hash_table_t));
	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	for (i = 0; i < size; i++)
	{
		new_hash->array[i] = NULL;
	}

	return (new_hash);
}
