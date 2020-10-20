#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - a function that creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *n;
char *owner;

if (name == 0 || owner == 0)
return (0);
d = malloc(sizeof(dog_t));
if (d == 0)
return (0);
d->n = malloc(sizeof(char) * (sizeof(name) + 1));
if (d->n == 0)
{
free(d);
return (0);
}
d->o = malloc(sizeof(char) * (sizeof(owner) + 1));
if (d->o == 0)
{
free(d->n);
free(d);
return (0);
}
d->n = name;
d->age = age;
d->o = owner;
return (d);
}
