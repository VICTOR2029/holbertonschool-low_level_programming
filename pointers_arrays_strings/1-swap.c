#include "main.h"
/**
* swap_int: function that swaps the values of two integers.
*@a: puntero a
*@b: puntero b
*Return: void
*/
void swap_int(int *a, int *b)
{
int im; /*Variable im = im*/
im = *b;
*b = *a;
*a = im;
}
