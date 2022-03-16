#include "main.h"

/**
 * main - entry block
 * @void: no argument
 **/
int main(void)
{
	char c[10] = "_putchar";

	int i = 0;

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
