#include "main.h"

/**
 * _memset - functiomn that copies a char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
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

/**
 * _calloc - allocates memory for an array using malloc
 * @snum: s elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int snum, unsigned int size)
{

	void *p;

	if (snum == 0 || size == 0)
		return (NULL);
	p = malloc(snum * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, (snum * size));
	return (p);
}
