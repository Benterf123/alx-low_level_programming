#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: program that checks for lowercase characters
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
