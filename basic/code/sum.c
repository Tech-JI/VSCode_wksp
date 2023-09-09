#include "header.h"
#include <stdio.h>

int sum(int n)
{
	int ret = 0;
	for (int i=1; i<n+1; i++) {
		ret+=n;
	}

	return ret;
}
