#include <stdio.h>

void main() {
	int i, j;

	for (i = 1; i <= 10; i ++) {
		for (j = 1; j <= 10; j++) {
			if (i >= j) {
				printf("��");
			}
			else
			{
				printf("��");
			}

			if (j == 10) {
				printf("\n");
			}
		}
	}
}