#include "main.h"

/**
 * _isupper - This program checks for uppercase letters
 * @c: character to check
 *
 * Return: 1 if uppercase otherwise return o
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

