#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - test for string digits
 * @str: array str
 *
 * Return: Always
 */
int check_num(char *str)
{
	unsigned int x;

	x = 0;
	while (x < strlen(str))

	{
		if (!isdigit(str[x]))
		{
			return (0);
		}
		x++;
	}
	return (1);
}

/**
 * main - This program Prints the sum of numbers
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
