#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 10 + 1;
	printf("���l�F%d\n", n);

	if (n != 1) {
		printf("1�ł͂���܂���\n");
	}
	else {
		printf("1�ł��B\n");
	}
}