#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: to
 * @src: from
 * Return: concat strings
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
	return *dest;
}

