#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - This function adds a node at the beginning of a linked list
 * @head: Pointer to the head pointer
 * @n: Data to add
 * Return: The address of the new element, or NULL if it failed
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

	if (*head != NULL)
		(*head)->prev = ptr;

	*head = ptr;

	return (*head);
}