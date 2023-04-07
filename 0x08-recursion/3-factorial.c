#include "main.h"

/**
 * factorial - This fuction calculate the factorial of a given number
 * @n: number whose factorial to be calculated
 *
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
