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
	_putchar(x + '0');
	return 0;
}
