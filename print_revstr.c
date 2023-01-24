#include "main.h"

/**
 * print_revstr - prints a string to stdout in reverse
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */
int print_revstr(va_list args)
{
	int count = 0, j;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	while (str[count] != '\0')
		count++;
	j = count - 1;
	while (j >= 0)
	{
		_putchar(str[j]);
		j--;
	}
	return (count);
}

