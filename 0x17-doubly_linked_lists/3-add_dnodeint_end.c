#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (*temp);
	}

	ptr = *head;
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->prev = ptr;

	return (*temp);
}
