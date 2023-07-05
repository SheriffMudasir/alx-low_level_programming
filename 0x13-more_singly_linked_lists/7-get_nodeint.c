#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the node at
 * given index in a linked list
 * @head: head pointer to the list
 * @index: index of the node to br return
 *
 * Return: pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr = head;

	while (ptr && count < index)
	{
		ptr = ptr->next;
		count++;
	}

	return (ptr ? ptr : NULL);
}
