#include <stdlib.h>
#include "main.h"
/**
 * array_range - This function creates an aray of int.
 * @min: minimum value passed from main function.
 * @max: maximum value passed from main function
 * Return: pointer to a newly created array.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j; 
	int count = 0, k = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		count += 1;

	array = malloc(sizeof(int) * count);
	for (j = min; j <= max; k++, j++)
		array[k] = j;

	return (array);

}

