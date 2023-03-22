#include "main.h"

/**
 * _islower - This function checks for lower case character
 * @c: is a character to be checked
 * Return: 1 if c is lower and 0 otherwise
 */
int _islower(int c)
{
	if (c > 97 && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
