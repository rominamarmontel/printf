#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - print char
 * @args: arg
 * Return: rien
 */
void print_char(va_list args)
{
	char c;
	c = va_arg(args, int);
	_putchar(c);
}
/**
 * print_string - print string
 * @args: arg
 * Return: rien
 */
void print_str(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char*);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar('\str[i]');
	}
}
/**
 * print_%d - print decimal
 * @args: arg
 * Return: rien
 */
void print_int(va_list args)
{
	int d;
	int i;
	int j = 0;

	d = va_arg(args, int);
	for (i = 0; d[i] != '\0' && j != 1; i++)
	{
		j = 1;
	}
	for (i = 0; d[i] != '\0'; i++)
	{
		_putchar(d[i] + 48);/*decaler 0>48 et 1>49...8>56 et 9>57*/
	}
}
/**
 * print_%i - print %i
 * @args: arg
 * Return: rien
 */
void print_0int(va_list args)
{
	int d;
	int i;
	int j = 0;

	i = va_arg(args, int);
	for (d = 0; i[d] != '\0' && j
	_putchar(i);
}