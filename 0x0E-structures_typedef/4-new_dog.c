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
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);
	dog->owner[strlen(dog->owner)] = '\0';

	dog->name = malloc((strlen(name) + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	dog->name[strlen(dog->name)] = '\0';

	dog->age = age;

	return (dog);
}
