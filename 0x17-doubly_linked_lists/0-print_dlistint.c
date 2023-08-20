#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - This function prints the elements of the list
 * @h: Pointer to the head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
        int count = 0;

        while (h != NULL)
        {
                printf("%d", h->n);
                if (h->next != NULL)
                {
                        printf(" ");
                }
                h = h->next;
                count++;
        }
        printf("\n");
        return (count);
}