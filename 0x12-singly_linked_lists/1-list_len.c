#include <stdlib.h>
#include "lists.h"
/**
 * lists_len - This function prints the number of elements
 * in a list.
 * @h: The head pointer to the list.
 * Return - Number of count of elements
 */

size_t list_len(const list_t *h)
{
        unsigned count = 0;
        const list_t *ptr = h;
        
        if (h == NULL)
                return (-1);
        while (ptr != NULL)
        {
                count++;
                ptr = ptr->next;
                }
                return (count); 
}
