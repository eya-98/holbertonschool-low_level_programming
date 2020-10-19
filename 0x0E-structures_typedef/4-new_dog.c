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
int i, j; 
char *copy_name = '\0'; 
char *copy_owner = '\0'; 
if (name == 0 || owner == 0)
return (0);
d = malloc(sizeof(dog_t));
if (d == 0)
return (0);
for (i = 0; name[i] != '\0'; i++)
copy_name [i] = name [i];
for (j = 0; owner[j] != '\0'; j++)
copy_owner[j] = owner[j];
d->name = malloc(sizeof(char) * (i + 1));
if (d->name == 0)
return (0);
d->owner = malloc(sizeof(char) * (j+ 1));
if (d->owner == 0)
return (0);
d->name = copy_name;
d->age = age;
d->owner = copy_owner;
return (d);
}
