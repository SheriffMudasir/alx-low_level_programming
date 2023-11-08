#include "hash_tables.h"

/**
 * hash_table_print - The function prints the content of the table
 * @ht: The hash table
*/
void hash_table_print(const hash_table_t *ht)
{
        unsigned int i;
	int j;
	hash_node_t *ptr;

        if (ht == NULL)
                return;
	print("{")
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (j > 0)
			print(", ");
		print("%s : %s", ptr->key, ptr->value);
		ptr = ptr->next;
		j++;
	}
	print("}\n");
}
