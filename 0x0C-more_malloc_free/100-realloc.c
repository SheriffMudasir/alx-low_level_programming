#include <stdlib.h>
#include "main.h"

/**
 * _realloc - This function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @ old_size:  is the size, in bytes, of the allocated space
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer to the newly allaocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	p = malloc(new_size);
	if (new_size > old_size)
		p = ptr;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0){
		free(ptr);
		return (NULL);
	}
	return (p);
}
