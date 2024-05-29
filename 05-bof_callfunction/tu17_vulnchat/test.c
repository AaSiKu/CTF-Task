#include <stdio.h>

int main(){
	int x = -0x21524111;
	long y = (long)x;
	printf("%ld %x", y,x);
	return 0;
	}
