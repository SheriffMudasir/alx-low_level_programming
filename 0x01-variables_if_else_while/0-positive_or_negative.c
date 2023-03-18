#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program determines if a specified random number is positive, negative or a zero
 *
 * Return: 0 upon successful iteration
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
