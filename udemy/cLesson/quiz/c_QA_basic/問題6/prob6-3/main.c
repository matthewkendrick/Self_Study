#include <stdio.h>

double triangle(double, double);

void main() {
	double teihen, takasa;
	double menseki;

	printf("���=");
	scanf("%lf", &teihen);
	printf("����=");
	scanf("%lf", &takasa);
	menseki = triangle(teihen, takasa);
	printf("�O�p�`�̖ʐρF%lf\n", menseki);
}

double triangle(double n1, double n2) {
	return n1 * n2 / 2;
}