#include "main.h"

/**
 *_memset - sdda
 *@s: ssfd
 *@b: szda
 *@n: aedsc
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		s[i] = b;
	}
	return (s);
}
