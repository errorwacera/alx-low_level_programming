#include "mylib.h"

int _atoi(char *s)
{
  int n = 0;
  int sign = 1;
  if (*s == '-')
  {
    sign = -1;
    s++;
  }
