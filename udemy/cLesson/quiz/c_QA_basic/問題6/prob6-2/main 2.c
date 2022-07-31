#include <stdio.h>

int mul(int, int, int);

void main() {
	int a, b, c;
	int result;

	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("c=");
	scanf("%d", &c);
	result = mul(a, b, c);
	printf("%d * %d * %d = %d\n", a, b, c, result);
}

int mul(int n1, int n2, int n3) {
	return n1 * n2 * n3;
}