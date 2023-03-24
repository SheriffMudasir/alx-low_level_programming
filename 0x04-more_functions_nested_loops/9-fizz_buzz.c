#include "main.h"
#include <stdio.h>

/**
 * main - This program prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three it prints Fizz instead of the number
 * and for the multiples of five it  prints Buzz
 * for both, it print fizzbuzz
 * Return: if successful
 */
int main(void)
{
	int x;

	for  (x = 1; x <= 100; x++)
	{
		if ((x % 5 == 0) && (x % 3 == 0))
		{
			printf("fizzbuzz");
			printf(" ");
		}
		if (x % 5 == 0)
		{
			printf("buzz");
			printf(" ");
		}
		else if (x % 3 == 0)
		{
			printf("fizz");
			printf(" ");
		}
		else
		{
			printf("%d", x);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
