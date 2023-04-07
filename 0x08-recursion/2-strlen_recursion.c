#include "main.h"
/**
 * _strlen_recursion - This function returns the length of a string.
 * @s: The string to check.
 *
 * Return: Length  the string.
 */
int _strlen_recursion(char *s)
{
	int lent = 0;

	if (*s)
	{
		lent++;
		lent += _strlen_recursion(s + 1);
	}

	return (lent);
}
