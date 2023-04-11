#include <stdio.h>
/**
 * main - This program prints all the arguments it receive
 *
 * @argc: argument count
 *
 * @argv: argument array
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int x;

	for (x  = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
