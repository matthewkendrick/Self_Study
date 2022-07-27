#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "randLib.h"

void init_rand() 
{
	srand((unsigned)time(NULL));
}

int getRand(int start, int end)
{
	return rand() % (end - start + 1) + start;
}