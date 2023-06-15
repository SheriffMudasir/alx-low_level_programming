#include <stdlib.h>
#include "main.h"
/**
 * * memory_space - This function fills memory with byte
 * @s: memory space to be filled
 * @b: char to copy
 * @n: number of times to copy
 *
 * Return: pointer character
 */

char *memory_space(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

/**
 * *_calloc - This functon allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	memory_space(ptr, 0, nmemb * size);
	return (ptr);
}
