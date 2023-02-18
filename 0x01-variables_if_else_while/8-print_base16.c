#include<stdio.h>

/**
 * main - print hexadecimal values
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char alp;

	n = 0;
	alp = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (alp <= 'e')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
