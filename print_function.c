#include "main.h"

/**
 * printf_integer - Prints a integer
 * @box: box to get the item
 *
 * Return: length of the integer
 */
int printf_integer(va_list box)
{
	int i = 0;
	int length;
	int digits = 0;
	int integer = va_arg(box, int);
	int copy = integer;
	char *str;

	if (integer < 0)
	{
		length += _putchar('-');
		integer = integer * -1;
	}
	while (copy / 10 > 0)
	{
		digits = digits + 1;
		copy = copy / 10;
	}
	str = malloc(sizeof(char) * (digits + 1));
	while (integer / 10 > 0)
	{
		str[i] = integer % 10 + 48;
		integer = integer / 10;
		i++;
	}
	str[i] = integer % 10 + 48;
	str[i + 1] = '\0';
	length = i;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	return (length);
}

/**
 * printf_char - Prints a char
 * @box: box to get the item
 *
 * Return: 1
 */
int printf_char(va_list box)
{
	_putchar(va_arg(box, int));
	return (1);
}

/**
 * printf_string - Prints a string
 * @box: box to get the item
 *
 * Return: length of the string
 */
int printf_string(va_list box)
{
	int i = 0;
	char *str;

	str = va_arg(box, char*);
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
