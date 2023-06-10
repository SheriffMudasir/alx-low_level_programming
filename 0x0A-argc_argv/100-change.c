#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This program prints the minimum number of coins to
 * @argc: argument count
 * @argv: argument vector array
 *
 * Return: 0 if successful or  1 Error
 */
int main(int argc, char *argv[])
{
        int num1, x, num2;
        int coin_value[] = {25, 10, 5, 2, 1};

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        num1 = atoi(argv[1]);
        num2 = 0;

        if (num1 < 0)
        {
                printf("0\n");
                return (0);
        }

        for (x = 0; x < 5 && num1 >= 0; x++)
        {
                while (num1 >= coin_value[x])
                {
                        num2++;
                        num1 -= coin_value[x];
                }
        }

        printf("%d\n", num2);
        return (0);
}
