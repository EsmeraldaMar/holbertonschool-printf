#include "../main.h"

int main(void)
{
        int len;
        int len2;
	int len3;
	int len4;

        len = _printf("Let's try to %s %d %d %s %s.\n", "printf", 32, -32, "simple", "sentence");
        len2 = printf("Let's try to printf %d %d simple sentence.\n", 32, -32);
        _printf("String:[%s]\n", "I am a string !");
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
	_printf("Length:[%d, %i]\n", len, len);
    	printf("Length:[%d, %i]\n", len2, len2);
        len3 = _printf("%d\n", -32);
	len4 = printf("%d\n", -32);
	printf("%d - %d\n", len3, len4);
	return (0);
}
