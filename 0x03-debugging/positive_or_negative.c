#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - Check if a number is positive
 * or negative or zero
 * @i: is a value to be checked
 * Return: 0 if successful
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
	else
	{
		printf("%d is zero", i);
	}
	printf("\n");
}
