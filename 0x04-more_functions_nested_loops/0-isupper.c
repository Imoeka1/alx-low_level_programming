#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: single Letter input
 *
 * Return: Always Success
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}

