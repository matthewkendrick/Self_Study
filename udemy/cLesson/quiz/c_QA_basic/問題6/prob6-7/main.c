#include <stdio.h>

double circumference(double);
double area(double);

void main() {
	double radius, result1, result2;
	printf("�~�̔��a����͂��Ă��������F");
	scanf("%lf", &radius);
	result1 = circumference(radius);
	result2 = area(radius);

	printf("�~����%lf�ł�\n", result1);
	printf("�~�̖ʐς�%lf�ł�\n", result2);
}

double circumference(double radius) {
	return (radius * 2) * 3.14;
}

double area(double radius) {
	return radius * radius * 3.14;
}