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
int i, j;
dog_t *d;
if (name == 0 || owner == 0)
return (0);
d = malloc(sizeof(dog_t));
if (d == 0)
return (0);
for (i = 0; i < name[i] != 0; i++)
{
}
d->name = malloc(sizeof(char) * (i + 1));
if (d->name == 0)
{
free(d);
return (0);
}
for (i = 0; owner[i] != 0; i++)
{
}
d->owner = malloc(sizeof(char) * (i + 1));
if (d->owner == 0)
{
free(d->name);
free(d);
return (0);
}
d->name = name;
d->owner = owner;
d->age = age;
return (d);
}

