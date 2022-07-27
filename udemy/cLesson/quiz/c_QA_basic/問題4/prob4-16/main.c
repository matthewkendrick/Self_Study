#include <stdio.h>

void main() {
	int i, j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d*%d=%d ", i, j, i * j);
			if (j == 9) {
				printf("\n");
			}
		}
	}
}