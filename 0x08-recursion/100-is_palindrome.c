#include "main.h"

int parser(char *s, int x, int lent);
int _recursion(char *s);

/**
 * is_palindrome - This function returns 1
 * if a string is a palindrome and 0 if not.
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
        if (*s == 0)
                return (1);
        return (parser(s, 0, _recursion(s)));
}

/**
 * _recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _recursion(char *s)
{
        if (*s == '\0')
                return (0);
        return (1 + _recursion(s + 1));
}

/**
 * parser - evaluate the characters recursively for palindrome
 * @s: string to check
 * @x: iterating value
 * @lent: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int parser(char *s, int x, int lent)
{
        if (*(s + x) != *(s + lent - 1))
                return (0);
        if (x >= lent)
                return (1);
        return (parser(s, x + 1, lent - 1));
}
