#include "main.h"
/**
 * _isalpha - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
