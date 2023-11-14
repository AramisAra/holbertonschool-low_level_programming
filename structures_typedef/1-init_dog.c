#include <stdlib.h> 
#include "dog.h"

/**
 * init_dog - It's use to initalizes the dog variable
 * @d: is the pointer
 * @name: is the name
 * @age: is the age
 * @owner: is the owner
*/
void init_dog(struct dog *d, char *name, float *age, char *owner)
{

    if (d == NULL)
        d = malloc (sizeof(struct dog));
    d->name = name;
    d->age = age;
    d->owner = owner;

}