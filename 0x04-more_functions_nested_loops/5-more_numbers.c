#include "main.h"

/**
 * more_numbers - printing 10 times numbers from 0 to 14
 * Description: a program that prints 10 times the numbers 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int c, round;

	for (c = 0; c < 15; c++)
	{
		for (round = 0; round <= 10; round++)
		{
			_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
