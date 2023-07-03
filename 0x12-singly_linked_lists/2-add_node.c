#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This function adds new node at the beginning of a list
 * @head: pointer-pointer to the list
 * @str: string to add to the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	unsigned int count = 0;

	while (str[count])
		count++;

	new_element = malloc(sizeof(list_t));
	if (!new_element)
		return (NULL);

	new_element->str = strdup(str);
	new_element->len = count;
	new_element->next = (*head);
	(*head) = new_element;

	return (*head);
}
