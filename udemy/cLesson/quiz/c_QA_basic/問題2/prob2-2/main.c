#include <stdio.h>

void main() {
	int width, height;

	printf("長方形の幅:");
	scanf("%d", &width);
	printf("長方形の高さ:");
	scanf("%d", &height);

	printf("長方形の面積は、%dm2です。\n", width * height);
}