#include <stdlib.h>
#include <time.h>
#include "logic.h"

int player = 0;
int computer = 0;

void init()
{
	srand((unsigned)time(NULL));
}

void setPlayer(int num)
{
	player = num;
}

void setComputer()
{
	computer = rand() % 3;
}