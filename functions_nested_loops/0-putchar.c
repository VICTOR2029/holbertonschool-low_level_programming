#include "main.h"

/**
 * main - entry point
 *
 * Description: _putchar
 *
 * Return: always 0
 */

int main(void)
{
  int i = 0;
  char c;
  char s[] = "main.h";

  while (i <= 9)
    {
      c = s[i];
      _putchar(c);
      i++;
    }
  return (0);
}






