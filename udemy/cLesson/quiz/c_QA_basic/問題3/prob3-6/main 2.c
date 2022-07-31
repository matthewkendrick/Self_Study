#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 6 + 1;
	printf("êîílÅF%d\n", n);
	if (n >= 3) {
		printf("3à»è„Ç≈Ç∑ÅB\n");
	}
}