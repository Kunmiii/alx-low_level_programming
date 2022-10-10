#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Poppy
 * @name: type char pointer
 * @age: type float
 * @owner: type char pointer
 *
 * Description: Define a new type struct dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);  
#endif
