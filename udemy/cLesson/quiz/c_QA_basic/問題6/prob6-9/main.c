#include <stdio.h>

void square(int, int);

void main() {
	int width, height;
	printf("ÇΩÇƒÅF");
	scanf("%d", &height);
	printf("ÇÊÇ±ÅF");
	scanf("%d", &width);
	square(width, height);
}

void square(int width, int height) {
	int i, j;
	if(width != 0 && height != 0){
		for (i = 0; i < height; i++) {
			for (j = 0; j < width; j++) {
				printf("Å°");
			}
			printf("\n");
		}
	}
}