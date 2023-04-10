#include "main.h"
/**
 * _strncpy - This function copies a string
 * @ch1: input value
 * @ch2: input value
 * @n: input value
 *
 * Return: ch1
 */
char *_strncpy(char *ch1, char *ch2, int n)
{
	int x;

	x = 0;
	while (x < n && ch2[x] != '\0')
	{
		ch1[x] = ch2[x];
		x++;
	}
	while (x < n)
	{
		ch1[x] = '\0';
		x++;
	}

	return (ch1);
}
