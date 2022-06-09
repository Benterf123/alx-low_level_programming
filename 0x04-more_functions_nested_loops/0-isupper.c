#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks the code for uppercase characters
 * @c: program that checks for uppercase characters
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
