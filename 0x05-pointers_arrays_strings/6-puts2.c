#include "main.h"

/**
 * puts2 - a function that prints all string characters
 * @str: An input string
 * Return: 0
 */
void puts2(char *str)
{
	int j = 0, i = 0;

	while (str[j] != '\0')

		j++;

	j -= 1;

	for (; i <= j; i += 2)
		_putchar(str[i]);

	_putchar('\n');

}
