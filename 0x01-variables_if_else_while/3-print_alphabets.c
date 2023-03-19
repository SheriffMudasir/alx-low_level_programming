#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * and then in uppercase follow by new line
 *
 * Return: 0 if program run without error
 */
int main(void)
{
	char ab = 'a';
	char AB = 'A';

	while (ab <= 'z')
	{
		putchar(ab);
		ab++;
	}

	while (AB <= 'z')
	{
		putchar(AB);
		AB++;
	}

	putchar('\n');

	return (0);
}
