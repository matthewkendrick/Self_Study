#include <stdio.h>

void gcd(int, int);
int lcm(int, int);

void main() {
	int a, b, result;

	printf("1つ目の値を入力してください:");
	scanf("%d", &a);
	printf("2つ目の値を入力してください:");
	scanf("%d", &b);
	printf("\n");
	result = lcm(a, b);
	printf("2つの数の最小公倍数は、%dです。\n", result);
	gcd(a, b);
	
}

void gcd(int n1, int n2) {
	int c;
	
	if (n1 < n2) {
		c = n1;
		n1 = n2;
		n2 = c;
	}

	c = n1 % n2;
	while (c != 0)
	{
		n1 = n2;
		n2 = c;
		c = n1 % n2;
	}

	printf("2つの数の最大公約数は、%dです。\n", n2);
}

int lcm(int n1, int n2) {
	int c, tmp;
	c = n1 * n2;
	if (n1 < n2) {
		tmp = n1;
		n1 = n2;
		n2 = tmp;
	}
	
	tmp = n1 % n2;
	while (tmp != 0) {
		n1 = n2;
		n2 = tmp;
		tmp = n1 % n2;
	}

	return c / n2;
}