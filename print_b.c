#include "main.h"

/**
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integer
 */

int print_bin(va_list val)
{
	int non = 0;
	int c = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			non = 1;
		if (non)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			c++;
		}
	}
	if (c == 0)
	{
		c++;
		_putchar('0');
	}
	return (c);
}
