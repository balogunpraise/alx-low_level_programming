#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: to
 * @src: from
 * Return: concat strings
 */
char *_strcat(char *dest, char *src)
{
   int i, j;

   i = 0;
   j = 0;
   while (dest[i] != '\n')
   {
	  i++;
   }
   while (src[j] != '\n')
   {
	  dest[i] = src[j];
	  i++;
	  j++;
   }
   dest[i] = '\0';
   return (dest);
}

