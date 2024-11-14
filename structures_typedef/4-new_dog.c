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
	dog_ptr->name = malloc(strlen(name) + 1);
	dog_ptr->owner = malloc(strlen(owner) + 1);

	if (dog_ptr == NULL)
		return (NULL);


	if (dog_ptr->name == NULL || dog_ptr->owner == NULL)
	{
		return (NULL);
	}



	dog_ptr->name = name;
	dog_ptr->age = age;
	dog_ptr->owner = owner;
	return (dog_ptr);

}
