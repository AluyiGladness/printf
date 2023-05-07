#include "main.h"
/**
 * _printf - function that produces output
 * @format: character format
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int counter = 0;
	const char *j = format;

	va_start(ap, format);

	while (*j != '\0')
	{
		if (*j == '%')
		{
			switch (*(++j))
			{
				case 'c':
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
	}
	va_end(ap);
	return (counter);
}

