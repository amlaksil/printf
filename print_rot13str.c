#include "main.h"
/**
 * rot13 - it encodes the given string by using key = 13
 * @a: the address  of string to be encoded
 * Return: the encoded string
 */
void rot13(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
	if (a[i] >= 'a' && a[i] <= 'z')
	{
	a[i] = (((a[i] - 'a') + 13) % 26) + 'a';
	}
	if (a[i] >= 'A' && a[i] <= 'Z')
	{
		a[i] = (((a[i] - 'A') + 13) % 26) + 'A';
	}
	}
}

/**
 * print_rot13str - prints a string to int rot13 format
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */
int print_rot13str(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	rot13(str);
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}
