#include "main.h"

/**
* swap_int - converts number of n to 98 by pointers
* @a: pointer of number a
* @b: pointer of number b
*/
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
