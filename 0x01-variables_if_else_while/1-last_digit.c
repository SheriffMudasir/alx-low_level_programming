#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - This code print the last value of a random number
 *
 * and determine if is greater than 5, less than 6 or 0
 *
 * Return: 0 if program runs successfully without error
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int num1 = n % 10;
	if (num1>5)
{
	printf("Last digit of %d is %d and is greater than 5", n, num1);
}	
	else if (num1 < 6 && num1 != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, num1);
}
	else
{
	printf("Last digit of %d is %d and is 0", n, num1);
}
	return (0);
}
