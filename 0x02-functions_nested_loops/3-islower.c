#include "main.h"

/**
 * _islower - checks case
 * Description: 'returns zero or one'
 * @c: input value
 * Return: 0 || 1
 */
int _islower(int c)
{
	char first;
	char last;

	first = 'a';
	last = 'z';
	if (c >= first && c <= last)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
