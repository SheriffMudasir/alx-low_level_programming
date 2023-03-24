#include "main.h"

/**
 * print_numbers - This function prints the number from 0 to 9
 *
 * Return: 0 if successfu
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
