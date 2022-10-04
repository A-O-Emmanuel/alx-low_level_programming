#include "main.h"

/**
 * create_array - creates ann array of chars, and
 * initializes it with a specific char.
 * @size: size of the array
 * @c: character to insert
 * Return: NULL is size is zero or if is fails,
 * Pointer to array if everything is normal.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
