#include "main.h"

/**
 *_memset - sdda
 *@s: ssfd
 *@b: szda
 *@n: aedsc
 *Return: sedd
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
