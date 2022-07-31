#include <stdio.h>
#include "randLib.h"

void main() 
{
	int i, num;
	init_rand();
	for (i = 0; i < 100; i++) {
		num = getRand(-10, 10);
		printf("—”:%d\n", num);
	}
}