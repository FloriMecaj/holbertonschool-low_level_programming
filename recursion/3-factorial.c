#include "main.h"

/**
 *factorial - asas
 *@n: asdasx
 *Return: aeds
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
