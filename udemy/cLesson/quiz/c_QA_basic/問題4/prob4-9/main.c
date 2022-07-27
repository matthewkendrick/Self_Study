#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int a;
	srand((unsigned)time(NULL));

	while (1)
	{
		a = rand() % 100 + 1;
		printf("%d\n", a);
		if (a % 10 == 0) {
			break;
		}
	}

	printf("èIóπÇµÇ‹Ç∑\n");
}