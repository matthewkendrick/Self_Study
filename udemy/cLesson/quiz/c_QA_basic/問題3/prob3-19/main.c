#include <stdio.h>

int main() {
	int a;
	printf("西暦を入力してください：");
	scanf("%d", &a);

	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 == 0) {
				printf("閏年です\n");
			}
			else
			{
				printf("閏年ではありません\n");
			}
		}
		else 
		{
			printf("閏年です\n");
		}
	}
	else 
	{
		printf("閏年ではありません\n");
	}
}