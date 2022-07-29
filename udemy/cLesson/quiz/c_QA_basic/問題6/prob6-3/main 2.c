#include <stdio.h>

double triangle(double, double);

void main() {
	double teihen, takasa;
	double menseki;

	printf("’ê•Ó=");
	scanf("%lf", &teihen);
	printf("‚‚³=");
	scanf("%lf", &takasa);
	menseki = triangle(teihen, takasa);
	printf("OŠpŒ`‚Ì–ÊÏF%lf\n", menseki);
}

double triangle(double n1, double n2) {
	return n1 * n2 / 2;
}