#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - This code examine if a random number
 *
 * is greater than 5, is zero or less than 6
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than six and not 0", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, n % 10);
	}
	printf("\n");
	return (0);
}
