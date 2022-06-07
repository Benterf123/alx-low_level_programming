#include "main.h"

/**
 * jack_bauer - prints jack bauer's daily minutes
 * Description: program that prints jack bauer's minutes of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;
	i = 0;

	for (i <= 24, i = 0; i++)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		putchar (':');
	for (j <= 60; j = 0; j++)
	{
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		_putchar('\n');
	}
	}
}
