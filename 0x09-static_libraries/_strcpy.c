#include "mylib.h"

char *_strcpy(char *dest, char *src)
{
  char *tmp = dest;
  while ((*dest++ = *src++))
    ;
  return tmp;
}
