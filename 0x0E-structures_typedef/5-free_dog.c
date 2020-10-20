#include <stdlib.h>
#include "dog.h"
/**
 * free_dog -  a function that frees dogs.
 * @d : dog-t var.
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
if (d != 0)
{
free(d->owner);
free(d->name);
free(d);
}
}
