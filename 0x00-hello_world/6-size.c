#include<stdio.h>

/**
 * main - prints the various sized of the types available
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %2d byte(s)\n", sizeof(char));
	printf("Size of an int: %2d byte(s)\n", sizeof(int));
	printf("Size of a long int: %2d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %2s byte(s)\n", sizeof(double));
	printf("Size of a float: %2d byte(s)\n", sizeof(float));
	return (0);
}
