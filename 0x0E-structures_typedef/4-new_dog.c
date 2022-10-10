#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: string for dog name
 * @age: integer for dog's age
 * @owner: string for onwer's name
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	int i, j, k;
	struct dog *doge;

	doge = malloc(sizeof(struct dog));

	if (doge == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;

	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);

	if (n == NULL)
	{
		free(doge);
		return (NULL);
	}

	o = malloc(sizeof(char) * j + 1);

	if (o == NULL)
	{
		free(n);
		free(doge);

		return (NULL);
	}

	for (k = 0; k <= i; k++)
		n[k] = name[k];

	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	doge->name = n;
	doge->age = age;
	doge->owner = o;

	return (doge);
}
