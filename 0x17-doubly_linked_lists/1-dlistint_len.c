#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - This function counts the element of the list
 * @h: Pointer to the head
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
        int count;

        count = 0;
        while (h != NULL)
        {
                count++;
                h = h->next;
        }
        return (count);
}
