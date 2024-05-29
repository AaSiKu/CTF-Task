#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	for(int x =0;x<0x32;x++){
		printf("%d\n",rand()%100);
	}
	return 0;
}
