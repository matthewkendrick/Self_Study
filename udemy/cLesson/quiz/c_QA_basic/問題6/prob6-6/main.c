#include <stdio.h>

void stars(int);

void main() {
	int n;
	printf("•\Ž¦‚·‚é‰ñ”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &n);
	stars(n);
}

void stars(int n) {
	int i;
	if (n > 0) {
		for (i = 0; i < n; i++) {
			printf("š");
		}
		printf("\n");
	}
	else
	{
		printf("0‚æ‚è‘å‚«‚¢’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	}
}