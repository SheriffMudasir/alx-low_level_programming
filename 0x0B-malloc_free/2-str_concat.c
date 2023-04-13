#include "main.h"
#include <stdlib.h>
/**
 * str_concat - This function conatenate two string
 * @s1: input one to concatenate
 * @s2: input two to concatenate
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conc_string;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	conc_string = malloc(sizeof(char) * (x + y + 1));
	if (conc_string == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		conc_string[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		conc_string[x] = s2[x];
		x++, y++;
	}
	conc_string[x] = '\0';
	return (conc_string);
}
