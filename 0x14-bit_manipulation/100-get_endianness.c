#include "main.h"

/**
 * get_endianness - This function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *x = (char *) &y;

	return (*x);
}