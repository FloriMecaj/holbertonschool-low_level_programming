#include "main.h"

/**
 * jack_bauer - Entry point
 * @void: is a parameter
 * Return abs(void);
 * Return 0
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
	for (minute = 0; minute < 60; minute++)
	{
		_putchar('0' + (hour / 10));
		_putchar('0' + (hour % 10));
		_putchar(':');
		_putchar('0' + (minute / 10));
		_putchar ('0' + (minute % 10));
		_putchar('\n');
	}
	}
}
