#include <stdio.h>

void square(int, int);

void main() {
	int width, height;
	printf("���āF");
	scanf("%d", &height);
	printf("�悱�F");
	scanf("%d", &width);
	square(width, height);
}

void square(int width, int height) {
	int i, j;
	if(width != 0 && height != 0){
		for (i = 0; i < height; i++) {
			for (j = 0; j < width; j++) {
				printf("��");
			}
			printf("\n");
		}
	}
}