#include "main.h"

/**
 * print_alphabet - prints alphabets followed by a new line
 * Description: 'prints the alphabets'
 * Return: Always 0 (Succees)
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
