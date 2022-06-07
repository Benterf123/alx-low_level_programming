#include "main.h"

/**
 * print_sign - prints signs of numbers
 *@n: program that prints the signs of numbers
 *
 * Return: 1 if n is greater than 0, 0 if n is 0 and - if n is less than 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		return ('-');
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
