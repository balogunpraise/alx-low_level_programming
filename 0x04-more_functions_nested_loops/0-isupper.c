#include "main.h"

/**
 * isuper - checks if a letter is upper
 * @c: value
 * Return: 0 || 1
 */
int isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (1);
	else
		return (0);
}
