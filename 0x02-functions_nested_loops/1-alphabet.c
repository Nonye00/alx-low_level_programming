#include "main.h"
/**
 * main - entry point
 *
 * print: print alphabet a-z
 *
 * return: 0
 */

void print_alphabet(void)
{
	char q;
		for (q = 'a'; q <= 'z'; q++)
		{
			_putchar(q);
		}
	_putchar('\n');
}
