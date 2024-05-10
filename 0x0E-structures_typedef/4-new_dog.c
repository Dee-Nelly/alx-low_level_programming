#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - copies a string and returns  a pointer to that string
 *		from a memory space allocated by malloc and cleared by free
 *@str: string to be duplicated
 *
 * Return: pointer to duplicated string and NULL upon failure
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *dupe;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dupe = (char *)malloc((sizeof(char) * len) + 1);
	if (dupe == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dupe[i] = str[i];
	}
	dupe[len] = '\0';
	return (dupe);
}

/**
 * new_dog - a function that creates a new dog
 * @name: dogs's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
		return (NULL);

	new_dog_ptr->name = _strdup(name);
	new_dog_ptr->owner = _strdup(owner);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
