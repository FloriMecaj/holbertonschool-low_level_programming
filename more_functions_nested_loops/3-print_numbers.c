#include "main.h"
/**
 * print_numbers - function that multiplies two integers
 * main.h header file
 * Return:0
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
