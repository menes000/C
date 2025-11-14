#include <stdio.h>

int main() {
	int a,i, b=1, size,c=0,tmp;
	bool swaped;
	int arry[] = {23,56,8,353,2,34364,7,886,9,0,76,3,888};
	size = sizeof(arry) / sizeof(arry[0]);
	for(; c<size;c++,b++){	
		swaped = false;
		for(a=0; a<(size-b); a++){
			if(arry[a]>arry[a+1]){
				tmp = arry[a];
				arry[a]=arry[a+1];
				arry[a+1]=tmp;
				swaped = true;
			}
			if(swaped=false)break;
		}
	
	}
	
	for(i=0; i<size;i++){
		printf("%d, ",arry[i]);
	}
	printf("\n");
	return 0;
	
}
