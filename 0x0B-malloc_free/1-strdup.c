#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - This function returns a pointer to
 * a newly allocated space in memory
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{
	char *may;
	int x, y = 0;


	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;
	may = malloc(sizeof(char) * (x + 1));
	if (may == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		may[y] = str[y];
	return (may);
}
