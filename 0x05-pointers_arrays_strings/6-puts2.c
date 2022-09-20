#include "main.h"

/**
 * puts2 - Prints one char out of two of a string
 * @str : Char array string type
 * Description : Print 1st char, then 3rd, then 5th, etc..
 */

void put2(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}

	_putchar('\n');
}

