#include "main.h"
/**
*function that swaps the values of two integers.
*@a: puntero 1
*@b: puntero 2
*Return: void
*/
void swap_int(int *a, int *b)
{
int im; /*Variable im = im*/
im = *b;
*b = *a;
*a = im;
}
