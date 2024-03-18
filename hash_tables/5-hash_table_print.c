#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order
 * 
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *ptr;
	unsigned int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] == NULL)
		{
			index++;
			continue;
		}
		if (comma == 1)
			printf(", ");
		comma = 1;
		ptr = ((ht->array)[index]);
		while (ptr != NULL)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			if (ptr->next != NULL)
				printf(", ");
			ptr = ptr->next;
		}
		index++;
	}
	printf("}\n");
}
