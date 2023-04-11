#include <stdio.h>
/**
 * main - This program prints it name.
 *
 * @argc: argument count.
 *
 * @argv: argumenr array
 *
 * Return: 0 if successfull
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
