#include "main.h"

/**
 * main - prints alphabets followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
