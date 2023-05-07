/**
 * print_mystring - prints string
 * @value : string to print
 * @length: length of string
 * Return: void
 *
 */
void print_mystring(char *value, int *length)
{
	int len = strlen(value);

	*length += len;
	fputs(value, stdout);
}
