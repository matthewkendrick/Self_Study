#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 21 - 10;
	printf("”’lF%d\n", n);

	if (n == 0) {
		printf("0‚Å‚·\n");
	}
	else if(n < 0) {
		printf("•‰‚Ì”‚Å‚·\n");
	}
	else {
		printf("³‚Ì”‚Å‚·\n");
	}
}