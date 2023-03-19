#include <stdio.h>

/**
 * main - The program prints all single digits
 *
 * of base 10.
 *
 * followed by a new line.
 *
 * Return: 0 if program run successfully
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");

	return (0);
}
