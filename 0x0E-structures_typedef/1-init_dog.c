#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the new dog struct whose variable is to be initialized
 *
 * @d: pointer to the struct dog
 * @name: name of the new dog
 * @age: age of new dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
