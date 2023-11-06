#include "hash_tables.h"

/**
 * hash_table_set - This function adds an element to the hash table.
 * @ht: The hash table to add or update the key/value pair
 * @key: The key string
 * @value: The value to store with the key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        unsigned long int index;
        hash_node_t *new_node;
        char *key_copy;
        char *value_copy;
        hash_node_t *temp;
        
        if (ht == NULL || key == NULL || value == NULL)
                return 0;
        
        index = key_index((const unsigned char *)key, ht->size);
        for (temp = ht->array[index]; temp; temp = temp->next)
        {
                if (strcmp(temp->key, key) == 0)
                {
                        free(temp->value);
                        temp->value = strdup(value);
                        if (temp->value == NULL)
                                return 0;
                        return 1;
                }
        }
        
        new_node = malloc(sizeof(hash_node_t));
        if (new_node == NULL)
                return 0;
                
                
        key_copy = strdup(key);
        
        if (key_copy == NULL)
        {
                free(new_node);
                return 0;
        }
        value_copy = strdup(value);
        if (value_copy == NULL)
        {
                free(new_node);
                free(key_copy);
                return 0;
        }

        new_node->key = key_copy;
        new_node->value = value_copy;
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
        return 1;
}
