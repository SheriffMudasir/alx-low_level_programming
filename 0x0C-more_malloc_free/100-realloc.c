#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocate memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: previous size of allocated memory
 * @new_size: new size of memory block
 *
 * Return: pointer to the new memory
 */

void*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *ptr1;
	char *ptr2;

	if (new_size == 0 && ptr){
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if(!ptr1)
		return (NULL);

	ptr2 = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptr1[x] = ptr2[x];
	}

	if (new_size > old_size){
		for (x = 0; x < old_size; x++)
			ptr1[x] = ptr2[x];
	}

	free(ptr);
	return (ptr1);
	

}
