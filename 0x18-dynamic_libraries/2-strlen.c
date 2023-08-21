#include "main.h"
/**
 * _strlen - This function returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
        int legnthy = 0;

        while (*s != '\0')
        {
                legnthy++;
                s++;
        }

        return (legnthy);
}
