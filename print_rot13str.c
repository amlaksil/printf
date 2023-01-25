#include "main.h"
/**
 * print_rot13str - prints a string to rot13 format
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */
int print_rot13str(va_list args)
{
	int i = 0;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
		while(s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		return (6);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	_putchar((((s[i] - 'a') + 13) % 26) + 'a');
	}
	if (s[i] >= 'A' && s[i] <= 'Z')
	{
		_putchar((((s[i] - 'A') + 13) % 26) + 'A');
	}
	}
	return (i);
}
