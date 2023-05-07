/**
 * print_integer - prints integers
 * @value: integer to print
 * @base: its base
 * @length: its length
 */
void print_integer(int value, int base, int *length)
{
	char buffer[100];
	int x = 0;
	char *digit = "0123456789abcdef";

	if (value < 0)
	{
		buffer[x++] = '-';
		value = -value;
	}
	do {
		buffer[x++] = digit[value % base];
		value /= base;
	} while (value > 0);
	buffer[x] = '\0';
	*length += x;
}
