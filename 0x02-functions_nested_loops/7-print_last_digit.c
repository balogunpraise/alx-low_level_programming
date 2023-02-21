#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: value
 * Return: 0
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
		_putchar(x * -1 + '0');
		return (x * -1);
	}
	else
	{
		_putchar(x * -1 + '0');
		return (x);
	}
}
