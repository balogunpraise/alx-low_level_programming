#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 * Description: 'prints lower case alphabets in 10places'
 */
void print_alphabet(void)
{
	char letter;
	int count;

	letter = 'a';
	count = 0;

	while (count < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}

