#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a type struct dog variable
 * @d: pointer to struct dog to initialize
 * @name: initialized name
 * @age:  initialized age
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
