#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 3 + 1;
	
	if (n == 1) {
		printf("�O�[\n");
	}
	else if (n == 2) {
		printf("�p�[\n");
	}
	else
	{
		printf("�`���L\n");
	}
}