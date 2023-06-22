#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - This function add all it parameters
 * @n: Paramters passed to the function.
 * @...: A variable number of paramters to find the sum
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
        {
                va_list list;
                unsigned int x, sum = 0;


                va_start(list, n);


                for (x = 0; x < n; x++)
                        sum += va_arg(list, int);


                va_end(list);


                return (sum);
        }