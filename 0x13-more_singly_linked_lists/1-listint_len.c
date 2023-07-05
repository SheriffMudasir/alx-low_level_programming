#include "lists.h"

/**
 * listint_len - This function returns the number of elements in a linked lists
 * @h: linked list to be counted
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
