#include "../main.h"

int main(void)
{
        int len;
        int len2;

        len = _printf("Let's try to %s a %s %s.\n", "printf", "simple", "sentence");
        len2 = _printf("Let's try to printf a simple sentence.\n");
        _printf("String:[%s]\n", "I am a string !");
        _printf("Character:[%c]\n", 'H');
	_printf("Length:[%d, %i]\n", len, len2);
        return (0);
}
