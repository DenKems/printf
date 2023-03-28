#include "main.h"

/**
* check_specifier - function checks if the character is specifier
* and points to the appropriate function of that specifier
* Return: pointer to the specifier function(Success)
* Otherwise it returns NULL pointer
*/
int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t specifier_array[4] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}};

	for (i = 0; specifier_array[i].t != NULL; i++)
	{
		if (*(specifier_array[i].t) == *format)
		{
			return (specifier_array[i].f);
		}
	}

	return (NULL);
}
