#include "main.h"

/**
 * main - prints lowercase alphabets
 * Description: program that prints lowercase alphabets
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	putchar('\n');


}
