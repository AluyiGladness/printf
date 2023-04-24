#include "main.h"
/**
 * _printf - function that produces output
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	int counter = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				putchar('%');
				counter++;
			}
			else if (*format == 'c')
			{
				char c = va_args(ap, int);

				putchar(c);
				counter++;
			}
			else if (*format == 's')
			{
				char *str = va_args(ap, char *);

				fputs(str, stdout);
				counter += strlen(str)
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

