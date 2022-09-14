#include "main.h"
/**
 * main - entry point
 * Description: print_alphabet a-z
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
