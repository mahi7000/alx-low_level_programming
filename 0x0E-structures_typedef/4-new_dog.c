#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - function
 * @name: char
 * @age: float
 * @owner: char
 * Return: sturct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cpy_dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	cpy_dog = malloc(sizeof(dog_t));

	if (cpy_dog == NULL)
		return (NULL);

	cpy_dog->name = malloc(sizeof(char) * (l1 + 1));
	if (cpy_dog->name == NULL)
	{
		free(cpy_dog);
		return (NULL);
	}

	cpy_dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (cpy_dog->owner == NULL)
	{
		free(cpy_dog);
		free(cpy_dog->name);
		return (NULL);
	}

	_strcpy(cpy_dog->name, name);
	_strcpy(cpy_dog->owner, owner);
	cpy_dog->age = age;

	return (cpy_dog);
}

/**
 * _strlen - function
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - function
 * @dest: char
 * @src: char
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
