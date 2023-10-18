#include "main.h"
#include <stdio.h>
/**
 *  *  * main - entry point
 *   *  * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
