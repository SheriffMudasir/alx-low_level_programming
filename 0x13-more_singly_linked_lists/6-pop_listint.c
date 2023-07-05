#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a linked list
 * @head: head pointer to the first element in the linked list
 *
 * Return: the data inside the node that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (data);
}