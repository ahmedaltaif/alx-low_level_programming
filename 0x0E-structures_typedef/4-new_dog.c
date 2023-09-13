#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog -  function that creates a new dog.
 * @name: name value
 * @age: age value
 * @owner: owner value
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;

	s = malloc(sizeof(dog_t));
	if (s == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(s);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(s);
		free(name);
		return (NULL);
	}

	s->name = name;
	s->age = age;
	s->owner = owner;
	return (s);
}
