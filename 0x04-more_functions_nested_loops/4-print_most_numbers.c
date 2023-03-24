#include "main.h"
/**
 * print_most_numbers - This program prints 0 t0 9
 *
 * with the exepmtion 0f 2 and 4
 * Return: 0 if successful
 */
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
