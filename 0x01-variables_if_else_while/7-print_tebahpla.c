#include <stdio.h>

/**
 * main - This program print lowercase alphabets
 *
 * in reverse followed by a new line
 *
 * Return: 0 if successful
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
