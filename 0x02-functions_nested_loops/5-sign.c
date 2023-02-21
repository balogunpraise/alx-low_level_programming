#include "main.h"

/**
 * print_sign - prints the sign of a number
 * Description: This prints a negative or positive
 * @n: value
 * Return 0 || 1
 */
int print_sign(int n)
{
	if ( n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
