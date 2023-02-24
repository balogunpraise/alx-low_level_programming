#include "main.h"

/**
 * _isupper - checks if a letter is upper
 * @c: value
 * Return: 1 if c is uppercase and 0 if c is lowercase
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
