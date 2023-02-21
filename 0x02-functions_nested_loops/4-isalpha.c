#include "main.h"

/**
 * _isalpha - checks alphabet
 * Description: 'checks if a character is an alphabet'
 * @c: value
 * Return: 0 || 1
 */
int _isalpha(int c)
{
	char lower_first;
	char upper_first;
	char lower_last;
	char upper_last;

	lower_first = 'a';
	upper_first = 'A';
	lower_last = 'z';
	upper_last = 'Z';
	if ((c >= lower_first && c <= lower_last) || (c >= upper_first && c <= upper_last))
		return (1);
	else
		return (0);
}

