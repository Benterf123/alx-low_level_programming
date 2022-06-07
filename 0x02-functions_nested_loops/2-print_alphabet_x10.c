#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets x10
 * Description: a program that prints lowercase alphabets x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	for (round = 0; round < 10; round++)
	{

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	}
}
