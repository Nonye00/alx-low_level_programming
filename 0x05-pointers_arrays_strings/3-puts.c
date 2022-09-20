#include "main.h"

/**
  * _puts - prints a string and a new line
  * @str: pointer to a string to print
  * Return: 0
*/

void _puts(char *str)
{
	int c = 0;
	while (str[c])
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
