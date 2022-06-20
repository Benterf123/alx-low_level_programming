#include "main.h"

/**
 * _memset - fills a memory block with a constant byte
 * @s: pointer to char parameters
 * @b: data to be filled
 * @n: the number of bytes to be filled
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
