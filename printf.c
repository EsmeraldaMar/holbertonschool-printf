#include "main.h"


/**
 * printd - prints integer but not zero
 *
 * @d: integer to be printed
 *
 * Return: length
 */
int printd(int d)
{
	if(d == 0) {
		return 0;
	}

	if(d < 0) {
		putchar('-');
		return printd(-d) + 1;
	}

	int r = printd(d / 10);
	putchar(d % 10 + '0');
	return r + 1;
}

/**
 * _printf - print stuff
 *
 * @format: string to receive
 * @...: list of items
 *
 * Return: length
 */
int _printf(const char *format, ...) {
	int cnt = 0;
	int len = strlen(format);
	va_list args;
	va_start(args, format);
	for(int i = 0; i < len; i++)
	{
		if(format[i] != '%') {
			putchar(format[i]);
			cnt++;
		} else {
			i++;
			if(format[i] == '%'){
				putchar('%');
				cnt++;
			} else if(format[i] == 'c') {
				putchar(va_arg(args, char));
				cnt++;
			} else if(format[i] == 'd' || format[i] == 'i') {
				int d = va_arg(args, int);
				if(d == 0) {
					putchar('0');
					cnt++;
				} else {
					cnt += printd(d);
				}
			} else if(format[i] == 's') {
				for(char *s = va_arg(args, char *); *s; s++){
					putchar(*s);
					cnt++;
				}
			}
		}
	}
	va_end(args);
	return cnt;
}

