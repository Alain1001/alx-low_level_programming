#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src)
{
	int len1, len2;
	int i = 0;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i]
	}

	return (dest);
}

