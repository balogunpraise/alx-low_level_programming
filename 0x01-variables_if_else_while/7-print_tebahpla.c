#include<stdio.h>

/**
 * main - reversed alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
