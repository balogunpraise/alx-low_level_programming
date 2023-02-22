#include "main.h"

/**
 * times_table - displays from one to nine times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int row;
	int column;
	int n;

	for (column = 0; column <= 9; column++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (row = 1; row <= 9; row++)
		{
			n = row * column;
			if ((n / 10) > 0)
				_putchar((n / 10) + '0');
			else
				_putchar(' ');
			_putchar((n % 10) + '0');
			if (row < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
