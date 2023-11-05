#include "hash_tables.h"
/**
 * hash_table_create - This function create a hash table
 * @size: This is the size of the array
 * Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *table;
        int i;

        table = (hash_table_t *)(malloc(sizeof(hash_table_t)));
        table->size = size;
        table->array = (hash_table_t **)calloc(table->size, sizeof(hash_table_t *));
        for (i = 0; i < table->size; i++)
        {
                table->array[i] = NULL;
        }

        return (table);
}