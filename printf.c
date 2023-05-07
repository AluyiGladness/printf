#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
<<<<<<< HEAD
 * _printf - function that produces output
 * @format: character format
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int counter = 0;
	const char *j = format;
=======
 * myprintf - a similar function to the standard printf function
 * @format: content to print
 * return: printed values or char
 */

void _printf(const char *format, ...)
{
	va_list ap;
>>>>>>> 678da6fe982616bc7fd6384a1e06d153c1425a45

	va_start(ap, format);
	int length = 0;

	while (*j != '\0')
	{
		if (*j == '%')
		{
			switch (*(++j))
			{
				case 'c':
<<<<<<< HEAD
					counter += _putchar(va_arg(ap, int));
					break;
				case 's':
					const char *str = va_arg(ap, char *);

					while (*str != '\0')
					{
						counter += _putchar(*str++);
					}
					break;
				case '%':
					counter += _putchar('%');
					break;
			}

		} else
		{
			counter += _putchar(*j);
		}

		j++;
=======
					print_mychar((char) va_arg(ap, int), &length);
					break;
				case 's':
					print_mystring(va_arg(ap, char*), &length);
					break;
				case 'd':
					print_integer(va_arg(ap, int), 10, &len);
					break;
				case 'x':
					print_integer(va_arg(ap, int), 16, &len);
					break;
				default:
					/*discard unknown format */
					break;
			}
		}
		else
		{
			len++;
			putchar(*format);
		}
		format++;
>>>>>>> 678da6fe982616bc7fd6384a1e06d153c1425a45
	}
	va_end(ap);
}

