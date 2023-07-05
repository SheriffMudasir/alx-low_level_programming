#include "lists.h"

/**
 * sum_listint - This function returns the sum of all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: sum of elements or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
