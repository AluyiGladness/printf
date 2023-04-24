#include "main.h"
/**
 * _print - function that produces output
 * @format: character string
 * Return: number of characters printed
 */
int _print(const char *format, ...)
{
	int counter = 0;
	va_list ap;

	va_start(ap, format);

	while (*format)
	{
		if (*format == '%')
			format++;

		switch (*format)
		case 'c':
		{
			char c = (char) va_args(ap, int);

			write(STDOUT_FILENO, &c, 1);
			counter++;
			break;
		}
		case 's':
		{
			char *s = va_args(ap, char *);

			while (*s)
			{
				write(STDOUT_FILENO, s, 1);
				s++;
				counter++;
			}
			break;

		}
		case '%':
		{
			write(STDOUT_FILENO, '%', 1);
			counter++;
			break;
		}
		else
		{
			write(STDOUT_FILENO, format, 1)
				counter++;
		}
		format++;
	}

	va_end(ap);

	return (counter);
}
