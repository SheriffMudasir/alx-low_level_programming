#include "lists.h"

/**
 * print_listint - This function prints all the elements of a linked list
 * @h: linked list to printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
