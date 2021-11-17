#ifndef DOG_H
#define DOG_H

/**
  * struct dog - define beginning structure
  * @name: random number
  * @age: random number
  * @owner: random number
  */

struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

