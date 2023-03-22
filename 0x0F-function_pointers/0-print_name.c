#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - This prits the name
 * @name: name to print
 * @f: function to be used
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
