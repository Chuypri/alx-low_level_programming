#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	
	while (ch <= 'z')
	{
		_putchar(ch);
		:h++;
	}
	_putchar('\n');
}
