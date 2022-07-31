#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 100 + 1;
	printf("”’lF%d\n", n);
	if (n >= 80) {
		printf("—D\n");
	}
	else if (n < 80 && n >= 70) {
		printf("—Ç\n");
	}
	else if (n < 70 && n >= 60) {
		printf("‰Â\n");
	}
	else {
		printf("•s‰Â\n");
	}
}