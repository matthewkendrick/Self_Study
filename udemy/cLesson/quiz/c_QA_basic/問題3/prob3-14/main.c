#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int a, b;
	srand((unsigned)time(NULL));
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	
	if (a > b) {
		printf("a�̂ق����傫���ł��B\n");
	}
	else if (a < b) {
		printf("b�̂ق����傫���ł��B\n");
	}
	else {
		printf("�������ł��B\n");
	}
}