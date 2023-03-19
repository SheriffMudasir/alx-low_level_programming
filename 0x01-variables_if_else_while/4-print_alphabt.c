#include <stdio.h>

/**
 * main - This program print alphabets in lowercase
 *
 * with the exception of q and e
 *
 * followed by a new line
 *
 * Return: 0 if the program runs without error
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
