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
	int lenna;
	int lenow;

	for (lenna = 0; name[lenna] != '\0'; lenna++)
		;
	for (lenow = 0; owner[lenow] != '\0'; lenow++)
		;
	s = malloc(sizeof(dog_t));
	if (s == NULL)
	{
		free (s);
		return (NULL);
	}
	s->owner = malloc((lenow + 1) * sizeof(char));
	if (s->owner == NULL)
	{
		free(s);
		free(s->name);
		return (NULL);
	}
	s->name = malloc((lenna + 1) * sizeof(char));
	if (s->name == NULL)
	{
		free(s);
		free(s->owner);
		return (NULL);
	}

	s->name = name;
	s->age = age;
	s->owner = owner;
	return (s);
}
