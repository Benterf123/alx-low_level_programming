#include "main.h"

/**
 * print_rev - reverses an array of integers
 * @s: array to be reversed
 * @n: number of elements in the array
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j--] = tmp;
	}

}
