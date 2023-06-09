#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - This function prints the result of simple operations.
 * @argc: Argument count
 * @argv: An array of argument vectos
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
        {
                int num1, num2;
                char *ptr;


                if (argc != 4)
                {
                        printf("Error\n");
                        exit(98);
                }


                num1 = atoi(argv[1]);
                ptr = argv[2];
                num2 = atoi(argv[3]);


                if (get_op_func(ptr) == NULL || ptr[1] != '\0')
                {
                        printf("Error\n");
                        exit(99);
                }


                if ((*ptr == '/' && num2 == 0) ||
                    (*ptr == '%' && num2 == 0))
                {
                        printf("Error\n");
                        exit(100);
                }


                printf("%d\n", get_op_func(ptr)(num1, num2));

                return (0);
        }