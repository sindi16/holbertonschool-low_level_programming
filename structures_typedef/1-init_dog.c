#include "dog.h"
#include "stdlib.h"
/**
 * struct my_struct -  initialize a variable of type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Longer description
 */
struct my_struct

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d != NULL)
		{
			d->name = name;
			d->age = age;
			d-> owner = owner;
		};
}