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

	if (n < 0)
		x = -1 * n;
	else if (n == INT_MIN || n > 0)
		x = n;
	if(x == INT_MIN)
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
