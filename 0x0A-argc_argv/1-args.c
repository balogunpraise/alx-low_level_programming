#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	i = argc - 1;
	printf("%d\n", i - 1);
	return (0);
}

