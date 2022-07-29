#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 100 + 1;
	printf("”’lF%d\n", n);

	if (n < 50) {
		printf("50–¢–‚Å‚·\n");
	}
	else
	{
		printf("50ˆÈã‚Å‚·B\n");
	}
}