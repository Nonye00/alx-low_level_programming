#include "main.h"

/**
  * rot13 - Encodes a string using rot13.
  * @str: The string to be encoded.
  * Return: A pointer to the encoded string.
*/
char *rot13(char *str)
{
	int indx1 = 0, indx2;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[indx1])
	{
		for (indx2 = 0; indx2 < 52; indx2++)
		{
			if (str[indx1] == alphabet[indx2])
			{
				str[indx1] = rot13[indx2];
				break;
			}
		}
		indx1++;
	}
	return (str);
}
