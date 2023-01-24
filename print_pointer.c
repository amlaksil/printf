#include "main.h"
/**
 * print_pointer - it prints given interger to octal
 * @args: the pointer to be printed
 * Return: the amount of character printed in side this function
 */
int print_pointer(va_list args)
{
	unsigned long int num;
	int i, j;
	char a[16] = "0123456789abcdef";
	char str[27] = "";
	char str1[5] = "(nil)";

	num = (unsigned long int) va_arg(args, void *);

	if (num == 0)
	{
		j = 0;
		while (j < 5)
		{
			_putchar(str1[j]);
			j++;
		}
		return (5);
	}
	for (i = 0; num != 0; i++)
	{
		str[i] = a[num % 16];
		num = num / 16;
	}
	str[i++] = 'x';
	str[i++] = '0';
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	return (i);
}
