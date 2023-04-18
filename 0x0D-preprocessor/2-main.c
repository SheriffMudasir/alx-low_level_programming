#include <stdio.h>

/**
 * main - This program prints the name of the file it was compiled from
 * followed by a new line
 *
 * Return: 0 Successful
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
