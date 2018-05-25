#include <math.h>;

int findFirstElement(float eps) {
	float a0 = 1, a1 = 0;
	int i = 1;
	for (;;) {
		a1 = a0 + pow((-1), i)*(pow(2, i + 1) / (pow(2, 2 * i) + 1));
		if (fabs(a1 - a0) < eps) {
			return i;
			break;
		}
		i++;
	}
}