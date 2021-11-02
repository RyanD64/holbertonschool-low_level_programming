#include"dog.h"
#include <stddef.h>

/**
  * init_dog - initialize a variable type of struct dog
  * @d: random number
  * @name: random string
  * @age: random number
  * @owner: random string
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;

(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
