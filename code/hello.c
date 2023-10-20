#include <stdio.h>

#include "header.h"

void hello(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Hello\n");
  }

  printf("End of hello\n");
}
