#include "main.h"

/**
 * print_line - program that draws a straight line
 * Description: prints a straight line in the terminal
 * @n: count for character printing times
 * Return: 0
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
