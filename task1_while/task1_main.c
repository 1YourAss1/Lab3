#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

int main() {
	int n;
	double a;

	printf("n = ");
	scanf("%i", &n);
	a = summ(n);
	printf("%f", a);

	_getch();
	return 0;
}