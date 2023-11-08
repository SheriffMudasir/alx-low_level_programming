#include "hash_tables.h"
/**
 * hash_table_get - This function retrieves a value associated with a key.
 * @ht: The hash table
 * @key: The key
 * Returns: the value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
        unsigned long int index;
        hash_node_t *ptr;

        if (ht == NULL || key == NULL)
                return NULL;

        index = key_index((const unsigned char *)key, ht->size);
        ptr = ht->array[index];

        while (ptr)
        {
                if (strcmp(ptr->key, key) == 0)
                {
                        return ptr->value;
                }
                ptr = ptr->next;
        }

        return NULL;
}
