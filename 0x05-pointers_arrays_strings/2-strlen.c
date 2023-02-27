#include "main.h"

/**
 * _strlen - gets the lenght of a string
 * @s: input
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;
	int index;

	count = 0;
	index = 0;

	while (*s[index] != '\0')
	{
		count++;
		index++;
	}
	return (count);
}
