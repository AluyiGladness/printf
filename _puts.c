#include <stdio.h>
#include "main.h"

/**
 * _puts - similar to the standard puts function
 * @s: string
 * Return: string count
 */

int _puts(const char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		counter++;
		s++;
	}
	_putchar('\n');
	counter++;
	return (counter);
}

