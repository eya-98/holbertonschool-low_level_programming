#include "dog.h"
#include <stdio.h>
/**
 *print_dog- print a struct dog
 *@d: structure
 */
void print_dog(struct dog *d)
{
if (d == 0)
return;
else
{
if (d->name == 0)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("age: %f\n", d->age);
if (d->owner == 0)
printf("owner: (nil)\n");
else
printf("owner: %s\n", d->owner);
}
}
