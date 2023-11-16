#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


int _putchar(char c);
int _printf(const char *format, ...);
void _puts(char *str);
int print_char(va_list val);
int print_37(void);
int print_i(va_list args);
int print_d(va_list args);
int print_bin(va_list val);
int print_unsignedint(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(unsigned int num);
int print_exc_string(va_list val);
int print_HEX_extra(unsigned int num);


#endif
