#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - This function concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to a newly allocated memory in space.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = 0, y = 0, num1 = 0, num2 = 0;

	while (s1 && s1[num1])
		num1++;

	while (s2 && s2[num2])
		num2++;

	if (n < num2)
		s = malloc(sizeof(char) * (num1 + n + 1));
	else
		s = malloc(sizeof(char) * (num1 + num2 + 1));
	num2++;

	if (n < num2)
		s = malloc(sizeof(char) * (num1 + n + 1));
	else
		s = malloc(sizeof(char) * (num1 + num2 + 1));

	if (!s)
		return (NULL);

	while (x < num1)
	{
		s[x] = s1[x];
		x++;
	}
	
	while (n < num2 && x < (num1 + n))
		s[x++] = s2[y++];

	while (n >= num2 && x < (num1 + num2))
		s[x++] = s2[y++];

	s[x] = '\0';
	return (s);
}
