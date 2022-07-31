#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n, i;
	srand((unsigned)time(NULL));
	n = rand() % 10 + 1;
	printf("”’lF%d\n", n);

	for (i = 0; i < n; i++) {
		printf("¡");
	}
	printf("\n");
}