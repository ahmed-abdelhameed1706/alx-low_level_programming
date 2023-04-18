#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - function
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n_len = 0, o_len = 0, i, j;

	while (name[n_len] != '\0')
	{
		n_len++;
	}
	while (owner[o_len] != '\0')
	{
		o_len++;
	}

	dog = malloc(sizeof(struct dog));

	if (dog == NULL)
		return (0);

	dog->name = malloc(n_len + 1);

	if (dog->name == NULL)
	{
		free(dog);
		return (0);
	}

	dog->owner = malloc(o_len + 1);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (0);
	}
	for (i = 0; i <= n_len; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (j = 0; j <= o_len; j++)
		dog->owner[j] = owner[j];

	return (dog);
}
