#include <math.h>

double summ(int n) {
	double a = 1;
	for (int i = 1; i <= n; i++) {
		a = a + pow(-1, i)*(pow(2, i + 1) / (pow(2, 2 * i) + 1));
	}
	return a;
}