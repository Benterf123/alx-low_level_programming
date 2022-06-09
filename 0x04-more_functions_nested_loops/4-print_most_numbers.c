#include "main.h"

/**
 * print_most_numbers - prints most numbers except 4 and 2
 * Description: a program that prints most digits except 4 and 2
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '4' && i != '2')
			_putchar(i);
	}
		_putchar('\n');
}
