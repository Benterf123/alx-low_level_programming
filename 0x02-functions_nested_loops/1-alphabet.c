#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * Description: _putchar program that prints lowercase alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchari(a);
	}
	_putchar('\n');
}
