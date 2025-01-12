#include <stdio>

int bis(int x, int m) {
	return x | m;
}

int bic(int x, int m) {
	return x & ~m;
}

int bool_or(int x, int y) {
	return bis(x, m)
}

int bool_xor(int x, int y) {
	return bis(bic(x, y), bic(y, x))
}
