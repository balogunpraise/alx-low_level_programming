#include "main.h"

/**
 * print_most_numbers - prints numbers excluding 2 and 4
 * Return: Always void
 */
void print_most_numbers(void)
{
	int count;

	for (count = 0; count <= 9; count++)
	{
		if ((count == 2) || (count == 4))
			continue;
		else
			_putchar(count + '0');
	}
	_putchar('\n');
}

