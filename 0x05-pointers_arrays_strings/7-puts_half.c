#include "main.h"

/**
  * puts_half - prints the second half of the string
  * @str: the string reference
  * Return: 0
*/

void puts_half(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	;
	c++;
	for (c /= 2; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
		_putchar('\n');
}
