#include "main.h"

/**
 *_strlen_recursion - sdfc
 *@s: adscas
 *Return: ased
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(1 + s));
	else
		return (0);
}
