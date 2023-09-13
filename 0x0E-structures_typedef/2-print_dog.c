#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: structure pointer
 *
 */


void print_dog(struct dog *d)
{
	printf("Name : %s\n", d->name);
	printf("Age : %.6f\n", d->age);
	printf("Owner : %s\n", d->owner);
}
