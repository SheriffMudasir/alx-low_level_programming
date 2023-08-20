#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - This function returns the sum of all data (n) in the list
 * @head: Pointer to the head of the linked list
 * Return: The sum of all data values in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
