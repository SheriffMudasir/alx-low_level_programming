#include <stdio.h>

/**
 * main - This program print all possibility of single digit number
 *
 * in ascending order followed by a space
 *
 * Return: 0 if program runs without error
 */
int main(void)
{
	char num = '0';

	while (num <= '0')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
