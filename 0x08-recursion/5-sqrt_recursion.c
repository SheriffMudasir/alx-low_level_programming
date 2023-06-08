#include "main.h"

int actual_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: number whose square root to be calculated
 *
 * Return: Evaluated result
 */
int _sqrt_recursion(int n)
{
        if (n < 0)
                return (-1);
        return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursion to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @x: iterating value
 *
 * Return: resulting square root
 */
int actual_sqrt_recursion(int n, int x)
{
        if (x * x > n)
                return (-1);
        if (x * x == n)
                return (x);
        return (actual_sqrt_recursion(n, x + 1));
}
