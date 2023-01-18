#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the dog struct
*/


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
