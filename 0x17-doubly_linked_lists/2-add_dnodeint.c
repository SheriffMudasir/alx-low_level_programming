#include <stdio.h>
/**
 * add_dnodeint - This function add node at the beginning of a linked list
 * @head: pointer to the head pointer
 * @n: data to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->next = *head;
	ptr->n = n;
	ptr->prev = NULL;
	(*head)->prev = ptr;

	*head = ptr;

	return (*head);
}
