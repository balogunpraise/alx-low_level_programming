#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: value
 * Return: 0
 */
int print_last_digit(int n)
{
	int x;
	int p;
	int z;

	z = INT_MIN;
	if (n < 0)
		x = -1 * n;
	else if (n == z || n > 0)
		x = n;
	if(x == z)
	{
		p = -(x % 10)
		_putchar(p + '0');
	}
	else
	{
		p = x % 10;
		_putchar(p + '0');
	}
	return (p);
}
