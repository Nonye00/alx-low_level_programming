#include "main.h"

/**
  * puts2 - prints characters of a string
  * @str: the string reference
  * Return: 0
*/

void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
	_putchar('\n');
}
