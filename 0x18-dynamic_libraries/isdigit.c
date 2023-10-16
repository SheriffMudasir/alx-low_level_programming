#include "main.h"

/**
 * _isdigit - This program checks if a given value
 * is a digit between 0 and 9
 * @c: char to be checked
 *
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);
        else
                return (0);
}
