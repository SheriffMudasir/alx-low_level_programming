#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This function frees memory allocated for a struct dog
 * @d: struct dog to free
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
        if (d == NULL)
        {
                return;
        }

        free(d->name);
        free(d->owner);
        free(d);
}