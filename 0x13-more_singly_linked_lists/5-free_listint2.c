#include "lists.h"

/**
 * free_listint2 - This function frees a linked list
 * @head: head pointer to the list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

	*head = NULL;
}
