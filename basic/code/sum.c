#include <stdio.h>

#include "header.h"

int sum(int n) {
  int ret = 0;
  for (int i = 1; i < n + 1; i++) {
	ret += i;
  }

  return ret;
}
