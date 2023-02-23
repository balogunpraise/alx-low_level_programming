#include "main.h"

/**
 * isupper - checks if a letter is upper
 * @c: value
 * Return: 0 || 1
 */
int isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
}
