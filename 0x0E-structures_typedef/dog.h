#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 *
 * Description: Defines metadata about the dog and type of dog's struct
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
