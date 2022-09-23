#include "main.h"

/**
  * *_strcat - concatenates @src to @dest
  * @dest: the destination string
  * @src: the source string
  * Return: return value of dest
*/

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
