#include "main.h"

/**
 * print_most_numbers - prints most numbers except 4 and 2
 * Description: a program that prints most digits except 4 and 2
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != 4 && c != 2)
			_putchar(c);
		_putchar('\n');
	}
}
