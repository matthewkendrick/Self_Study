#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int n, i = 0;
	srand((unsigned)time(NULL));
	n = rand() % 10 + 1;
	printf("êîílÅF%d\n", n);
	
	
	while (n > i)
	{
		printf("Å°");
		i++;
	}
	printf("\n");
}