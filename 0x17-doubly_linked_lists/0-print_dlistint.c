#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - This function prints the element of the list
 * @h: Pointer to the head
 * Return: the number of nodes
 */

#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{

        int count = 0;
        while (h != NULL)
        {
                printf("%d", h->n);
                count++;
        }
        return (count);
}
