#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int n, i;
	srand((unsigned)time(NULL));
	n = rand() % 10 + 1;

	if (n >= 5) {
		for (i = 0; i < n; i++) {
			printf("��");
		}
		printf("\n");
	}
	else
	{
		printf("�����������l�F%d\n", n);
	}
	
}