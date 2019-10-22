#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *dname, *downer;

	doggo = malloc(sizeof(dog_t)); /* struct dog */

	if (doggo == NULL)
		return (NULL);

	dname = malloc((_strlen(name) + 1) * sizeof(char));

	if (dname == NULL)
		return (NULL);

	downer = malloc((_strlen(owner) + 1) * sizeof(char));

	if (downer == NULL)
		return (NULL);

	_strcpy(dname, name);
	_strcpy(downer, owner);

	doggo->name = dname;
	doggo->age = age;
	doggo->owner = downer;

	return (doggo);
}



/**
 * _strcpy - copies string to another string
 * @dest: string 1
 * @src: string 2
 * Return: string copy
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; a <= _strlen(src); a++)
		dest[a] = src[a];
	return (dest);
}


/**
 * _strlen - gives length of a string
 * @s: string
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l])
		l++;
	return (l);
}
