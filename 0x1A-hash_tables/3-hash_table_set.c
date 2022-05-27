#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key of the element
 * @value: value of the element
 *
 * Return: 1 if succesful, 0 otherwise
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	index = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL || strlen(key) == 0)
	{
		return (0);
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
