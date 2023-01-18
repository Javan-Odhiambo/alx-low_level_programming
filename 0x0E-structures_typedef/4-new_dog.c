#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	if (dog == NULL || name == NULL || owner == NULL)
		return (NULL);

	dog->owner = malloc(strlen(owner) * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);

	dog->name = malloc(strlen(name) * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);

	dog->age = age;

	return (dog);
}
