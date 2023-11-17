#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - acdcads
 *@n: adcdc
 *Return: sdccv
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list fl;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(fl, n);
	for (i = 0; i < n; i++)
		sum += va_arg(fl, int);

	va_end(fl);
	return (sum);
}
