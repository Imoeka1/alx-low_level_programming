#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack bauer
 * h = hour, m = minutes
 * Return: Always Success
 */
void jack_bauer(void)
{

	int h, m;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m <= 60; m++)
		{
			_putchar(h / 10) + '0');
			_putchar(h % 10) + '0');
			_putchar(':');
			_putchar(m / 10) + '0');
			_putchar(m % 10) + 10);
			_putchar('\');
		}
	}
}

