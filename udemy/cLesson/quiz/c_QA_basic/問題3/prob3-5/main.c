#include <stdio.h>

void main() {
	int a;
	printf("整数を入力：");
	scanf("%d", &a);

	if (a >= 20 && a < 80) {
		printf("20以上80未満です\n");
	}
}