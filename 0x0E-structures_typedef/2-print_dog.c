#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: structure pointer
 *
 */


void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name : (nil)\n");
	}else
	{
		printf("Name : %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("Name : (nil)\n");
	}else
	{
		printf("Age : %.6f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Name : (nil)\n");
	}else
	{
		printf("Owner : %s\n", d->owner);
	}
	
}
