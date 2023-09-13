#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: structure pointer
 * @name: name value
 * @age: age value
 * @owner: owner value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
