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

	if(n < 0)
		x = -1 * n;
	else
		x = n;
	p = n % 10;
	_putchar(p + '0');
	return (p);
}
