#include "main.h"
#include <string.h>
#include <stdarg.h>
/**
 * _printf - function that produces output
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list ap;
	char c, *s;

	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = (char) va_arg(ap, int);
					putchar(c);
					counter++;
					break;
				case 's':
					s = va_arg(ap, char *);
					fputs(s, stdout);
					counter+= strlen(s);
					break;
				case '%':
					putchar('%');
					counter++;
					break;
			}
		}
		else
		{
			putchar(*format);
			counter++;
		}
		format++;

	}
	va_end(ap);
	return (counter);
}
