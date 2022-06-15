#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index] != '\0')
		index++;
	while (src[dest_len] != '\0')
	{
		*(dest + index) = src[dest_len];
		dest_len++;
		index++;
	}
	*(dest + index) = '\0';

	return (dest);
}
