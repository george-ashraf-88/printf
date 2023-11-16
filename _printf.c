#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char *format, ...)
{
	match a[] = {
		{"%s", _puts}, {"%c", print_char},
		{"%%", print_37},
		{"%i", print_i}, {"%d", print_d}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsignedint},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_list args;
	int x = 0, z, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[x] != '\0')
	{
		z = 13;
		while (z >= 0)
		{
			if (a[z].ID[0] == format[x] && a[z].ID[1] == format[x + 1])
			{
				len += a[z].f(args);
				x = x + 2;
				goto Here;
			}
			z--;
		}
		_putchar(format[x]);
		len++;
		x++;
	}
	va_end(args);
	return (len);
}
