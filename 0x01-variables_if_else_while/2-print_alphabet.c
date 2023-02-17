#include<stdio.h>

/**
 * main - prints all the alpabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n = n + 1;
	}
	return (0);
}
