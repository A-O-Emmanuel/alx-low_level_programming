#include "main.h"

/**
 * _strcat - concatenates he string poined to by @src to 
 * the end of the string poined to by @dest
 * @dest: String that will be appended
 * #src: String to be concatenaed upon
 *
 * Return: returns pioner to @dest
 */

char *_streat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
