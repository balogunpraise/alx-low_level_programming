#inlude "main.h"

/**
 * print_to_98 - prints the given value to ninety eight
 * @n: value
 * Return: 0
 */
void print_to_98(int n)
{
	int count;

	if (n < 98)
	{
		for (count = n; count <= 98; count++)
		{
			if (count < 10)
				_putchar(count + '0');
			else
			{
				_putchar((count / 10) + '0');
				_putchar((count % 10) + '0');
			}
			if (count != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (count = n; count >= 98; coun--)
		{
			_putchar((count / 10) + '0');
			_putchar((count % 10) + '0');
			if (count != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
