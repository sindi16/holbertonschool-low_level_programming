#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog -  function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: ptr
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr = malloc(sizeof(dog_t));
	char *dog_name = malloc(strlen(name) + 1);
	char *dog_owner = malloc(strlen(owner) + 1);

	if (dog_ptr == NULL)
		return (NULL);


	if (dog_name == NULL || dog_owner == NULL)
	{
		return (NULL);
	}

	strcpy(dog_name, name);
	strcpy(dog_owner, owner);
	dog_ptr->name = dog_name;
	dog_ptr->age = age;
	dog_ptr->owner = dog_owner;
	return (dog_ptr);

}
