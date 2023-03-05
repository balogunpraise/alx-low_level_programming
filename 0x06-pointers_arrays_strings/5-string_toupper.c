#include "main.h"

/**
 * string_toupper - converts a string to upper
 * @a: input
 * Return: upper case
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
	}
	return (a);
}
