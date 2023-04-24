#include "main.h"
/**
 * _printf - function that produces output
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list ap;

	va_start(ap, format);


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
				char c = va_arg(ap, int);

				putchar(c);
				counter++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(ap, char *);

				fputs(str, stdout);
				counter += strlen(str);
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

