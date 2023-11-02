#include "./hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table.
 * Description: Print a key/value pair of hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *the_node;
	unsigned long int i;
	unsigned char the_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (the_flag == 1)
				printf(", ");

			the_node = ht->array[i];
			while (the_node != NULL)
			{
				printf("'%s': '%s'", the_node->key, the_node->value);
				the_node = the_node->next;
				if (the_node != NULL)
					printf(", ");
			}
			the_flag = 1;
		}
	}
	printf("}\n");
}
