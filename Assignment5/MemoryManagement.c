#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main() {
srand(time(NULL));
	int r;
	r=rand()%4096;
	printf("%i",r);
	printf(" binary = 0x%08x", r);
	printf(" hexadecimal = %04x",r);
	printf(" Number is Shifted By 16 Bits : %d",r << 16);
return 0;
}
