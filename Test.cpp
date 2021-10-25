#include <cstdio>
#include "Bit.h"

int main() {
	Bit bit1 = 2;
	Bit bit2 = bit1.GetFlipBit();
	printf("%d %d\n", bit1, bit2);

	if (bit1 != bit2) {
		printf("not equal\n");
	}
	else if (bit1 == bit2) {
		printf("equal\n");
	}

	return 0;
}