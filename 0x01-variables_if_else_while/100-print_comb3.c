#include <stdio.h>

/**
 * main - This program prints all possible different combinations of two digits
 *
 * And arranged in ascending order
 *
 * Return: 0 if successful
 */
int main(void)
{
	int num1, num2;

	for (num1 = '0'; num1 <= '8'; num1++)
	{
		for (num2 = '1'; num2 <= '9'; num2++)
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				if (num2 != '9' || num1 != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
