#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 * Description: 'prints lower case alphabets in 10places'
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	count = 0;

	while (count < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}

