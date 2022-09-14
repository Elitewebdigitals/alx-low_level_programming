#include "main.h"
/**
 * main - lets print alphabet in lower case
 * Return: returns 0 if successful
 */

void  print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
