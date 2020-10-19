#ifndef DOG
#define DOG
/**
 *struct dog - structure of dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
