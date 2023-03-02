#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	i = 0;

	for (i = 0; i != '\0'; i++)
	{
		dest = dest + src[i];
	}
	return (dest);
}

