#include "main.h"

/**
* print_percent - function prints charcter '%' to stdout
* @list: variadic parameters to be printed
* Return: returns the number of charcters printed
*/
int print_percent(va_list list)
{
	char c = (char)va_arg(list, int);
	int num = 0;

	if (c)
	{
		num = write(1, "%%", 1);
		return (num);
	}
	return (0);
}
