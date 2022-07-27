#include <stdio.h>
#include <string.h>
#include "nameDB.h"

char names[10][256];

void init()
{
	int i;
	for (i = 0; i < 10; i++) {
		strcpy(names[i], "");
	}
}

void setName(int num, char* name)
{
	if (num >= 0 && num < 10) {
		strcpy(names[num], name);
	}
}

void showName(int num)
{
	printf("%d:%s\n", num, names[num]);
}