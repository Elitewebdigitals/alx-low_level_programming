#include "main.h"

/**
 * check for the length of the string
 * check for a string
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
