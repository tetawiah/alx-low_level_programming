#include "main.h"
/**
* swap_int - s as bucket to swap values
*
* @a: first value
* @b: second value
* Return 0
*/
void swap_int(int *a, int *b)
{
		int s;

		s = *a;
		*a = *b;
		*b = s;
}
