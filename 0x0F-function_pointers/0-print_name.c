#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 *
 * Return: No return cause we've declared VOID as R_TYPE
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL) /* if any is NULL */
		return;

	f(name);
}
