#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	while(*dest)
	{
        	dest++;
    	}
	while(*src)
	{
        	*dest = *src;
        	src++;
        	dest++;
    	}
	return dest;
}

