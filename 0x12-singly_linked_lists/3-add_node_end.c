#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of a list_t list
 * @head: pointer_pointer to the list_t list
 * @str: string to duplicated and added in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_elemnt;
	list_t *ptr = *head;
	unsigned int count = 0;

	while (str[count])
		count++;

	new_elemnt = malloc(sizeof(list_t));
	if (!new_elemnt)
		return (NULL);

	new_elemnt->str = strdup(str);
	new_elemnt->len = count;
	new_elemnt->next = NULL;

	if (*head == NULL)
	{
		*head = new_elemnt;
		return (new_elemnt);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new_elemnt;

	return (new_elemnt);
}
