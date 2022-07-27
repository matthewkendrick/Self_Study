#include <stdio.h>

double circumference(double);
double area(double);

void main() {
	double radius, result1, result2;
	printf("円の半径を入力してください：");
	scanf("%lf", &radius);
	result1 = circumference(radius);
	result2 = area(radius);

	printf("円周は%lfです\n", result1);
	printf("円の面積は%lfです\n", result2);
}

double circumference(double radius) {
	return (radius * 2) * 3.14;
}

double area(double radius) {
	return radius * radius * 3.14;
}