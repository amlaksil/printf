## Custome printf
It contains some of the basic features and functions found in the manual 3 of "printf".
It produces output accrording to a format which is described below. This function write its
ouput to the studout, the standard output stream and returns the number of printed characters
on success and -1 when the function fails.
The available format specifiers are:

* %c: Prints a single character.
* %s: Prints a string of characters.
* %d: Prints integers.
* %i: Prints integers.
* %b: Prints the binary representation of an unsigned decimal.
* %u: Prints unsigned integers
* %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
* %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
* %r: Prints a reversed string
* %R: Prints the Rot13 interpretation of a string
# Usage
* All the files are to be compiled on Ubuntu 14.04 LTS
* Compile your code with gcc -Wall -Werror -Wextra -pedantic
* Include the "main.h" header file on your functions
# Example

```
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");

	a = printf("Expected: %c\n", 'd');
	b = _printf("Expected: %c\n", 'd');
	printf("Expected: %i\n", a); /* 11*/
        _printf("Actual: %i\n", b); /* 11 */

	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	char *str = "hello, world";
	printf("Expected: %s\n", "ALX"); /* Expected: ALX hello, world*/
        _printf("Actual: %s\n", "ALX"); /* Actual: ALX hello, world*/

	return (0);
}
```