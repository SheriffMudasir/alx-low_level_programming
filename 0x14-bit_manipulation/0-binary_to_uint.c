#include "stdlib.h"
#include "main.h"
/**
 * binary_to_uint - This function converts a binary number to an unsigned int
 * @b: pointer containing the binary number
 *
 * Return: the converted value
 */

unsigned int binary_to_uint(const char *b)
{
        unsigned int int_value = 0;
        int i;
        if (b == NULL)
        {
                return 0;
        }
        for (i = 0; b[i] != '\0'; i++)
        {
                if (b[i] == '0')
                {
                        int_value = int_value * 2;
                }
                else if (b[i] == '1')
                {
                        int_value = int_value * 2 + 1;
                }
                else
                {
                        return 0;
                }
        }
        return (int_value);
}
