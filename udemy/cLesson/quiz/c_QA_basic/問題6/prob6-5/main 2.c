#include <stdio.h>

int max(int, int);

void main() {
	int a, b;
	int result;
	printf("1�ڂ̒l����͂��Ă�������:");
	scanf("%d", &a);
	printf("2�ڂ̒l����͂��Ă�������:");
	scanf("%d", &b);
	result = max(a, b);
	printf("%d�ƁA%d�̂����A�傫���l��%d�ł��B\n", a, b, result);
}

int max(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else 
	{
		return n2;
	}

}