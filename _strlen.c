#include "main.h"
/**
* _strlen - to count
* @s: a pointer
* Return: i
*/

int _strlen(char *s)
{
  int i = 0;

  while (s[i])
    i++;
  return (i);
}
