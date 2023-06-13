#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - This function returns a pointer
 * to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)

{
        int **hip;
        int x, y;

        if (width <= 0 || height <= 0)
                return (NULL);
        hip = malloc(sizeof(int *) * height);
        if (hip == NULL)
                return (NULL);
        for (x = 0; x < height; x++)
        {
                hip[x] = malloc(sizeof(int) * width);

                if (hip[x] == NULL)
                {
                        for (; x >= 0; x--)
                                free(hip[x]);
                        free(hip);
                        return (NULL);
                }
        }

        for (x = 0; x < height; x++)
        {
                for (y = 0; y < width; y++)
                        hip[x][y] = 0;
        }
        return (hip);
}
