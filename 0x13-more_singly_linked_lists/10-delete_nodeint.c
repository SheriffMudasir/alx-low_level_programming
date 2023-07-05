#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes a node
 * in a linked list at a given index
 * @head: pointer to the first element in the list
 * @index: index of the node to deleted
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1 = *head;
	listint_t *ptr2 = NULL;
	unsigned int p = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr1);
		return (1);
	}

	while (p < index - 1)
	{
		if (!ptr1 || !(ptr1->next))
			return (-1);
		ptr1 = ptr1->next;
		p++;
	}


	ptr2 = ptr1->next;
	ptr1->next = ptr2->next;
	free(ptr2);

	return (1);
}
