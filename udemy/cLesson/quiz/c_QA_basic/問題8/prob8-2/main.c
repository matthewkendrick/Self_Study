#include <stdio.h>

void main()
{
	int a, b, c;
	int n1, n2;

	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for (c = 1; c <= 100; c++) {
				if (b >= a) {
					n1 = a * a + b * b;
					n2 = c * c;
					if (n1 == n2) {
						printf("a = %d, b = %d, c = %d, result = %d\n", a, b, c, n1);
					}
				}
			}
		}
	}
}