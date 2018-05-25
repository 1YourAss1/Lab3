#include <math.h>

double summ(int n) {
	double a = 1;
	int i = 1;
	while (i <= n) {
		a = a + pow(-1, i)*(pow(2, i + 1) / (pow(2, 2 * i) + 1));
		i++;
	}
	return a;
}