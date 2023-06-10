#include <stdio.h>
#include <stdlib.h>
/**
 * main - Thisfunction multiply two numbers passed as arguments
 * print error when two arguments not passed
 * followed by a new line
 * @argc: argument count
 * @argv: argument vector array
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int x = 0;
	int y = 0;
	int mul = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x += atoi(argv[1]);
		y += atoi(argv[2]);
		mul += x * y;
		printf("%d\n", mul);
		return (0);
	}
}
