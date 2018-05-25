#include <math.h>

double summ2(float eps) {
	float a0 = 1, a1 = 0, diff = fabs(a0 - a1);
	int i = 1;
	do {
		a1 = a0 + pow(-1, i)*(pow(2, i + 1) / (pow(2, 2 * i) + 1));
		diff = fabs(a0 - a1);
		a0 = a1;
		i++;
	} while (diff > eps);
	return a1;
}