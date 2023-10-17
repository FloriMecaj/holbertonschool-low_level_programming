#include <stdio.h>
/**
 *  *  * main - entry point
 *   *  * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	if (i <= 8)
	{
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
