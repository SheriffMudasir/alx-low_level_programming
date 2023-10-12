#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - This function gets the node at a given index
 * @head: the head pointer
 * @index: index of the node to be gotten
 * Return: the node at give index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
		dlistint_t *ptr;
		unsigned int count;

		count = 0;
		ptr = head;
		while(ptr != NULL)
		{
			if (count == index)
			{
				return (ptr);
			}
			ptr = ptr->next;
			count++;
		}
		return NULL;
}
