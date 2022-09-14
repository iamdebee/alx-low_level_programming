#include "main.h"

/**
 * print_alphabet - a function that print alphabet, lowercase
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{

	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}	
	_putchar('\n');
}

