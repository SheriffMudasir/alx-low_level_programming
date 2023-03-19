#include <stdio.h>

/**
 * main - This program prints all numbers of base 16
 *
 * in lower case followed by a new line
 *
 * Return: 0 if successful
 */
int main(void)
{
	int a = '0';
	char ab = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}

	while (ab < 'g')
	{
		putchar(ab);
		ab++;
	}
	putchar('\n');
	return (0);
}
