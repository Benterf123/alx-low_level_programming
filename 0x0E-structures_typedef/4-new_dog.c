#include <stdlib.h>
#include "dog.h"

/**
 * _copy - function to copy data
 * @src: data to be copied
 * Return: Pointer
 */
char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - Create a new dog variable

 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Pointer to the new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *marley;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	marley = malloc(sizeof(dog_t));
	if (marley == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(marley);
		return (NULL);
	}
	(*marley).name = new_name;

	(*marley).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*marley).name);
		free(marley);
		return (NULL);
	}
	(*marley).owner = new_owner;

	return (marley);
}
