#include <stdio.h>
/**
 * main - This [rogram prints the number of argument passed
 * @argc: Argument count
 * @argv: Argument vector array
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
