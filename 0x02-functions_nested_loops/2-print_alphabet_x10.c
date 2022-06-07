#include "main.h"

/**
 * print_alphabet - prints alphabets 10 times
 * Description: a program that prints lowercase alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	for (round = 0; round <= 10, round++)

		putchar('\n');
}
