#include "main.h"

/**
 * main - prints alphabets followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;
	int count;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar("\n");
	return (0);
}
