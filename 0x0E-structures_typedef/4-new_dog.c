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
d->name = malloc(sizeof(char) * (sizeof(name)));
if (d->name == 0)
{
free(d);
return (0);
}
 d->owner = malloc(sizeof(char) * (sizeof(owner)));
if (d->owner == 0)
{
free(d->name);
free(d);
return (0);
}
for (i = 0; name[i]; i++) 
d->name[i] = name[i];
d->name[i] = '\0';
d->age = age;
for (j = 0; owner[j]; j++)
d->owner[j] = owner[j];
d->owner[j] = '\0';
return (d);
}
