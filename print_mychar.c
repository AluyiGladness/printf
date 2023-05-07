#include "main.h"
/**
 * print_mychar - prints char
 * @value: char
 * @length: length
 * Return: void
 *
 */

void print_mychar(char value, int *length)
{
	*length += 1;

	putchar(value);
}
