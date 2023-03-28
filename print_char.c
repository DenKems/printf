#include "main.h"

/**
* print_char - functions prints a charcter to stdout
* @list: variadic parameters to be printed
* Return: returns the number of charcters printed
*/
int print_char(va_list list)
{
	char c = (char)va_arg(list, int);
	int num = 0;

	if (c)
	{
		num = write(1, &c, 1);
		return (num);
	}
	return (0);
}
