#include "main.h"

/**
 * _printf - print output according to a format
 * @format: character string containing directives
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int counter = 0;

	va_start(ap, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format == '%')
			format++;
			if (*format == 'c')
				counter += _putchar(va_arg(ap, int));
			else if (*format == 's')
				counter += _puts(va_arg(ap, char *));
			else if (*format == '%')
				counter += _putchar('%');
			else
				counter += _putchar('%');
				counter += _putchar(*format);
		else
			counter += _putchar(*format);
		format++;
	}

	va_end(ap);
	return (counter);
}

int_puts(const char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		counter++;
		s++;
	}
	counter++;
	return (counter);

}
