#include "main.h"

/**
 * _isupper - checks if a letter is upper
 * @c: value
 * Return: 0 || 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (0);
}
