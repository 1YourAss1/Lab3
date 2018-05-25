#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

int main() {
	double a;
	float eps;
	printf("eps = ");
	scanf("%f", &eps);
	a = summ2(eps);
	printf("%f", a);

	_getch();
	return 0;
}