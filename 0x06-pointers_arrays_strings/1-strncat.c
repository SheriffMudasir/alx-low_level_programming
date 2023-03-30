#include "main.h"
/**
 * _strncat - This function concatenate two strings
 * using at most n bytes from src
 * @ch1: input value
 * @ch2: input value
 * @n: input value
 *
 * Return: ch1
 */
char *_strncat(char *ch1, char *ch2, int n)
{
	int x;
	int y;

	x = 0;
	while (ch1[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && ch2[y] != '\0')
	{
	ch1[x] = ch2[y];
	x++;
	y++;
	}
	ch1[x] = '\0';
	return (ch1);
}
