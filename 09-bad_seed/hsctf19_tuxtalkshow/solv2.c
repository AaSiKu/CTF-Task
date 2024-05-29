#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int array[6];
	unsigned int  temp;
	array[0] = 0x79;
    	array[1] = 0x12c97f;
	array[2] = 0x135f0f8;
	array[3] = 0x74acbc6;
    	array[4] = 0x56c614e;
    	array[5] = 0xffffffe2;
	for (int x =0;x<6;x++){
		array[x]-=(rand()%10-1);
	}
	unsigned result = 0;
	for(int x = 0;x<6;x++){
		result+=array[x];
	}
	printf("%d\n",result);
}