#include<stdio.h>

/**
 * main - prints numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
