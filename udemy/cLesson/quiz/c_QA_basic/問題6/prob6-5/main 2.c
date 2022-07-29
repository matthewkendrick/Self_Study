#include <stdio.h>

int max(int, int);

void main() {
	int a, b;
	int result;
	printf("1つ目の値を入力してください:");
	scanf("%d", &a);
	printf("2つ目の値を入力してください:");
	scanf("%d", &b);
	result = max(a, b);
	printf("%dと、%dのうち、大きい値は%dです。\n", a, b, result);
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