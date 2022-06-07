#include "main.h"

/**
 * main - prints lowercase alphabets
 * Description: program that prints lowercase alphabets
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++
	}
	_putchar('\n');


}
