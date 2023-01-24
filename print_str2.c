#include "main.h"

/**
 * print_str2 - it prints a string includeing the non printable ones
 * @args: the string to be printed
 *
 * Return: the number of characters printed
 */
int print_str2(va_list args)
{
	int i, count = 0;
	char n[] = "0123456789ABCDEF";
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			_putchar(92);
			_putchar('x');
			_putchar(n[s[i] / 16]);
			_putchar(n[s[i] % 16]);
			count += 4;
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
