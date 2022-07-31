#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int num, i;
	srand((unsigned)time(NULL));
	num = rand() % 1000 + 1;

	printf("%d‚Ì–ñ”‚Í\n", num);
	for (i = 1; i <= num; ++i) {
		if (num % i == 0) {
			printf("%d \n", i);
		}
	}
}