#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

int main() {
	uint64_t fib[500];
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= 500; i++) {
		fib[i] = fib[i-1] + fib[i-2];
	}

	for (int i = 0; i <= 500; i++) {
		printf("%" PRIu64 "\n", fib[i]);
	}


	return 0;
}
