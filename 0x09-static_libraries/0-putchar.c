#include "main.h"

/**
 * main - prints to the screen
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar";
	int count;

	count = 0;
	while (count < 8)
	{
		_putchar(word[count]);
		count++;
	}
	_putchar('\n');
	return (0);
}
