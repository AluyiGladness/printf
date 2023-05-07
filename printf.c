#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - print output according to a format
 * @format: character string containing directives
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *s = va_arg(args, const char *

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*(++format))
			{
				case 'c':
					putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					for (; const char *s = va_arg(args, const char *); s++)
					putchar(*s);
					count++;
					break;
				case '%':
					putchar('%');
					count++;
					break;
				default:
					putchar('%');
					putchar(*format);
					count += 2;
			}
		}
		else
			putchar(*format);
			count++;

		format++;
	}
	va_end(args);
	return (count);
}
