#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 100 + 1;
	printf("”’lF%d\n", n);

	if (n <= 10 || n >= 90) {
		printf("10ˆÈ‰º‚©90ˆÈã‚Ì’l‚Å‚·\n");
	}
	else
	{
		printf("10‚æ‚è‘å‚«‚­90–¢–‚Å‚·\n");
	}
}