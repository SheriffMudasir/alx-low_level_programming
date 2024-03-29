#include "hash_tables.h"

/**
 * key_index - This function gives the index of a key.
 * @key: The key string
 * @size: The size of the hash table
 * Returns: the index at which the key/value pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
        unsigned long int index;

        index = hash_djb2(key);

        return (index % size);
}
