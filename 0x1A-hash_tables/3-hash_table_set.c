#include "hash_tables.h"
/**
 * hash_table_set - Add an item to Hash table.
 * @ht: A pointer to the hash table
 * @key: The key of the added item to the hash table
 * @value: The pair value of the key
 * Return: Upon failure 0 else 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *the_new;
	char *the_CopyValue;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	the_CopyValue = strdup(value);
	if (the_CopyValue == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = the_CopyValue;
			return (1);
		}
	}

	the_new = malloc(sizeof(hash_node_t));
	if (the_new == NULL)
	{
		free(the_CopyValue);
		return (0);
	}
	the_new->key = strdup(key);
	if (the_new->key == NULL)
	{
		free(the_new);
		return (0);
	}
	the_new->value = the_CopyValue;
	the_new->next = ht->array[index];
	ht->array[index] = the_new;

	return (1);
}
