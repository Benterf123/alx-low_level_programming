#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: defines the string
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}