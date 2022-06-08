#include "main.h"
/**
 *main - print putchar
 *Return: always 0
*/
int main(void)
{
	char myStr[9];
	int i;

	myStr[0] = '_';
	myStr[1] = 'p';
	myStr[2] = 'u';
	myStr[3] = 't';
	myStr[4] = 'c';
	myStr[5] = 'h';
	myStr[6] = 'a';
	myStr[7] = 'r';
	myStr[8] = '\0';

	for (i = 0; i < 8; i++)
	{
		_putchar(myStr[i]);
	}
	_putchar('\n');

	return (0);
}
