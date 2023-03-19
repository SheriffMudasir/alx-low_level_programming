#include <stdio.h>

/**
 * main - This print single digits
 *
 * of base 10 using putchar.
 *
 * followed by a new line
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
