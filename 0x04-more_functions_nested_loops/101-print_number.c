#include "main.h"
/**
  * print_number - prints numbers
  * @n: number to be printed
  * Return:void
*/

void print_number(int n)
{
	unsigned int q;
	q = n;
	if (n < 0)
	{
		_putchar(45);
		q = -n;
	}
	if (q / 10)
	print_number(q / 10);
	_putchar((q % 10) + '0');
}
