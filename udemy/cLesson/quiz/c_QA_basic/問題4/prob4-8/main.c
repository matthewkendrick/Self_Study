#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int a:
	srand((unsigned)time(NULL));

	while (1)
	{
		a = rand() % 10 + 1;
		printf("%d\n", a);
		if (a == 10) {
			break;
		}
	}

	printf("èIóπÇµÇ‹Ç∑");
}