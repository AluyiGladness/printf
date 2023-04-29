#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * myprintf - a similar function to the standard printf function
 * @format: content to print
 * return: printed values or char
 */

void myprintf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	int length = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
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
	}
	va_end(ap);
}

