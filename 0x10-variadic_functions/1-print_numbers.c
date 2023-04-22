#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - This function print numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
	{
		va_list num;
		unsigned int first;


		va_start(num, n);


		for (first = 0; first < n; first++)
		{
			printf("%d", va_arg(num, int));


			if (first != (n - 1) && separator != NULL)
				printf("%s", separator);
		}

		printf("\n");

		va_end(num);
	}

