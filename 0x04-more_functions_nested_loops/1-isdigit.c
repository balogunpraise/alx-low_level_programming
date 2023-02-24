#include "main.h"

/**
 * _isdigit - checks for a number
 * @c: value
 * Return: 1 if the input is a digit
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
