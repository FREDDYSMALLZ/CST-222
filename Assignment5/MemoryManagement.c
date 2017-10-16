#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
srand(time(NULL));
	int r;
	r=rand()%4096;
	printf("%i",r);
return 0;
}