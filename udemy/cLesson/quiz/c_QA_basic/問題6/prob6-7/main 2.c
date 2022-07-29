#include <stdio.h>

double circumference(double);
double area(double);

void main() {
	double radius, result1, result2;
	printf("‰~‚Ì”¼Œa‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%lf", &radius);
	result1 = circumference(radius);
	result2 = area(radius);

	printf("‰~ü‚Í%lf‚Å‚·\n", result1);
	printf("‰~‚Ì–ÊÏ‚Í%lf‚Å‚·\n", result2);
}

double circumference(double radius) {
	return (radius * 2) * 3.14;
}

double area(double radius) {
	return radius * radius * 3.14;
}