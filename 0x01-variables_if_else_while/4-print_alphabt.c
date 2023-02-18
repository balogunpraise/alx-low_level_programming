#include<stdio.h>

/**
 * main - prints alphabets excluding e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
			letter++;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
