#include "main.h"

/**
 *  * _putchar - Custom function to print a character
 *   * @c: The character to be printed
 *    * Return: 1 on success, -1 on error
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
	for (minute = 0; minute < 60; minute++)
	{
		_putchar('0' + (hour % 10));
		_putchar('0' + (hour / 10));
		_putchar(':');
		_putchar('0' + (minute % 10));
		_putchar ('0' + (minute / 10));
		_putchar('\n');
	}
	}
}
