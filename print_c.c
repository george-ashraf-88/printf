#include "main.h"

/**
 * print_char - prints a character.
 * @val: arguments.
 * Return: integer.
 */
int print_char(va_list val)
{
	char x;

	x = va_arg(val, int);
	_putchar(x);
	return (1);
}
