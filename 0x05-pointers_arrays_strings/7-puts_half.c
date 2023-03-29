#include "main.h"
/**
 * puts_half - This function prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, lenty;

	lenty = 0;

	for (a = 0; str[a] != '\0'; a++)
		lenty++;

	n = (lenty / 2);

	if ((lenty % 2) == 1)
		n = ((lenty + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
