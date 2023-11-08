#include "hash_tables.h"

/**
 * hash_table_print - Print the content of the hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned int i, j;
    hash_node_t *ptr;

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0, j = 0; i < ht->size; i++)
    {
        ptr = ht->array[i];
        while (ptr != NULL)
        {
            if (j > 0)
                printf(", ");
            printf("'%s': '%s'", ptr->key, ptr->value);
            ptr = ptr->next;
            j++;
        }
    }
    printf("}\n");
}

