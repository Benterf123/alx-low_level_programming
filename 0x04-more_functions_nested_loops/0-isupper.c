#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks the code for uppercase characters
 * @c: program that checks for uppercase characters
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (0);

	else
		return (1);

	return (0);
}
